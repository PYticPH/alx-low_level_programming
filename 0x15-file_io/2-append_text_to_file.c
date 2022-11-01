#include "main.h"

/**
 * append_text_to_file - Function to append text to file
 *
 * @filename: pointer to file to append text
 * @text_content: pointer to string/ text
 *
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, contentBytes, dataBytes = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		dataBytes = _strlen(text_content);

	contentBytes = write(fd, text_content, dataBytes);
	if (contentBytes == -1)
		return (-1);

	close(fd);
	return (1);
}

/**
 * _strlen - Function to count string length
 *
 * @c: string parameter
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
