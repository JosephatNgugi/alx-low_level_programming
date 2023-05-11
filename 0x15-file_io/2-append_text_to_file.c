#include "main.h"

int _strlen(char *str);

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file to append text to.
 * @text_content: A NULL terminated string to add to the file
 *
 * Return: 1 on Success, -1 if file does not exist, or insuficient
 * permission to write to file, or filename is NULL.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, written_chars;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		written_chars = write(fd, text_content, len);
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
		len++, str++;

	return (len);
}
