#include "main.h"

int _strlen(char *str);

/**
 * create_file - Creates a file.
 * @filename: Name of the file to be created.
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on Success, -1 if file cannot be created, written to.
 * or filename is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, written_chars;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		written_chars = write(fd, text_content, len + 1);
		if (written_chars == -1 || written_chars != len)
		{
			close(fd);
			return (-1);  /* writing text_content failed */
		}
	}
	close(fd);
	return (1);
}

/**
 * _strlen - Computes the length of a string
 * @str: String to compute length of
 *
 * Return: Length of the str
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
		len++;

	return (len);
}
