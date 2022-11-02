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
	if (cfd == -1)
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
 * openFile - Function to open and read source file
 *
 * @filename: source file to read
 * @mode: open file with mode permission
 *
 * Return: int (file descriptor)
 */

int openFile(char *filename, int mode)
{
	int fd;

	if (mode == 4)
	{
		fd = open(filename, O_RDONLY);
		if (filename == NULL || fd == -1)
			errorStatus(filename, 98);
	}
	else if (mode == 2)
	{
		fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0664);
		if (filename == NULL || fd == -1)
			errorStatus(filename, 99);
	}

	return (fd);
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

	src = openFile(argv[1], 4);
	dest = openFile(argv[2], 2);

	buffer = createBuffer(argv[2]);
	readFrom = read(src, buffer, 1024);

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
		dest = open(argv[2], O_APPEND | O_WRONLY);
	} while (readFrom > 0);

	free(buffer);
	fdHandler(src);
	fdHandler(dest);

	return (0);
}
