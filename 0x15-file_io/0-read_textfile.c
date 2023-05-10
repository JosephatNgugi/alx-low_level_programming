# include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX
 * standard Output
 * @filename: File to be read.
 * @letters: Number of letters it should read and print
 *
 * Return: The actual Number of letters it could read and print
 * if the file cannot be opened or read, if filename is NULL or
 * if write fails or does not write the expected amount of bytes,
 * Return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str_buff;
	ssize_t read_count = 0, write_count = 0;
	int fd;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	str_buff = malloc(sizeof(char) * (letters + 1));
	if (str_buff == NULL)
	{
		close(fd);
		return (0);
	}

	read_count = read(fd, str_buff, letters);

	if (read_count == -1)
	{
		close(fd);
		free(str_buff);
		return (0);
	}

	write_count = write(STDOUT_FILENO, str_buff, read_count);
	if (write_count == -1 || write_count != read_count)
	{
		close(fd);
		free(str_buff);
		return (0);  /* write failed or didn't write expected bytes */
	}
	close(fd);
	free(str_buff);

	return (read_count);
}
