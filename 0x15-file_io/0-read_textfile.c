#include "main.h"

/**
 * read_textfile - Function to read a text file and print it
 *
 * Description: read and print text file on POSIX standard output
 *
 * @filename: name of file to read
 * @letters: number of letters to read
 *
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd, contentBytes, dataBytes;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	contentBytes = read(fd, buff, letters);
	if (contentBytes == -1)
	{
		free(buff);
		return (0);
	}

	dataBytes = write(STDOUT_FILENO, buff, contentBytes);
	if (dataBytes == -1 || dataBytes != contentBytes)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(fd);

	return (dataBytes);
}
