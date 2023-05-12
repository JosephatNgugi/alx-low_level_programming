#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 1024

void print_error(const char *message, const char *arg);
int copy_file(const char *file_from, const char *file_to);
/**
 * main - Entry point
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
		print_error("Usage: cp file_from file_to\n", NULL);
		exit(97);
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
 * @arg: Second Argument passed
 */
void print_error(const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
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
	int fd_from, fd_to, bytes_read, bytes_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		print_error("Error: Can't write to file %s\n", file_to);
		close(fd_from);
		exit(99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			print_error("Error: Can't write to file %s\n", file_to);
			close(fd_from),	close(fd_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		print_error("Error: Can't read from file %s\n", file_from);
		close(fd_from),	close(fd_to);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}

