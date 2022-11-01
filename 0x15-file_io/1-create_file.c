#include "main.h"

/**
 * create_file - Fuction to create a file
 *
 * @filename: pointer to file to create
 * @text_content: pointer to string terminated with NULL
 *
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd, dataBytes, contentBytes;

	if (filename == NULL)
		return (-1);

	dataBytes = _strlen(text_content);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		contentBytes = write(fd, text_content, dataBytes);

	if (contentBytes == -1)
		return (-1);

	close(fd);
	return (1);
}


/**
 * _strlen - Function to count string length
 *
 * @c: pointer to string to count
 *
 * Return: int
 */

int _strlen(char *c)
{
	int count = 0;

	while (c[count] != '\0')
		count += 1;

	return (count);
}
