#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 1024

/**
 * msin - Entry point
 * @argc: Argument count
 * @argv: Argument array
 *
 * Return: (0) On success
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int result;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		return (97);
	}

	file_from = argv[1];
	file_to = argv[2];

	result = copy_file(file_from, file_to);
	if (result != 0)
	{
		return (result);
	}

	return (0);
}

/**
 * print_error - prints an error message
 * @message: Error message to be printed
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}

/**
 * copy_file - copies the content of one file to another
 * @file_from: Name of file to copy contents from.
 * @file_to: Name of file to cooy contents to.
 *
 * Return:  On success (0), (-1) If an error occured.
 */
int copy_file(const char *file_from, const char *file_to)
{
	char buffer[BUFSIZE];
	ssize_t bytes_read, bytes_written;
	int fd_from, fd_to;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Can't read from file");
		return (-1);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		print_error("Can't write to file");
		close(fd_from);
		return (-1);
	}

	while ((bytes_read = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			print_error("Can't write to file");
			close(fd_from),	close(fd_to);
			return (-1);
		}
	}

	if (bytes_read == -1)
	{
		print_error("Can't read from file");
		close(fd_from),	close(fd_to);
		return (-1);
	}

	close(fd_from),	close(fd_to);
	return (0);
}

