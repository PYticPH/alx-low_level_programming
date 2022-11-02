#include "main.h"

/**
 * errorStatus - Function to print write error and exit
 *
 * @filename: Name of file error occured
 * @code: error type exit code
 *
 * Return: void
 */

void errorStatus(char *filename, int code)
{

	if (code == 97)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	else if (code == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	else if (code == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);

	exit(code);
}

/**
 * fdHandler - Function to handle file descriptor error
 *
 * @fd: file descriptor
 *
 * Return: void
 */

void fdHandler(int fd)
{
	int cFd;

	cFd = fd;
	if (cFd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * createBuffer - Function to allocate memory
 *
 * @filename: name of file
 *
 * Return: pointer to a buffer type char
 */

char *createBuffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		errorStatus(filename, 99);
	}

	return (buffer);
}


/**
 * main - Entry point
 *
 * @argc: number of command line argument
 * @argv: array of command line argument
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int src, dest, readFrom, writeTo;
	char *buffer;

	if (argc != 3)
		errorStatus(NULL, 97);

	src = open(argv[1], O_RDONLY);
	buffer = createBuffer(argv[2]);
	readFrom = read(src, buffer, 1024);

	dest = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	do {
		if (src == -1 || readFrom == -1)
		{
			free(buffer);
			errorStatus(argv[1], 98);
		}

		writeTo = write(dest, buffer, readFrom);
		if (dest == -1 || writeTo == -1)
		{
			free(buffer);
			errorStatus(argv[2], 99);
		}

		readFrom = read(src, buffer, 1024);
	} while (readFrom > 0);

	free(buffer);
	fdHandler(src);
	fdHandler(dest);

	return (0);
}
