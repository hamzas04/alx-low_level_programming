#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, or an exit status on failure.
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, read_count;
	char buffer[BUF_SIZE];
	char *from_path, *to_path;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_path = argv[1];
	to_path = argv[2];

	from_fd = open(from_path, O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_path);
		exit(98);
	}

	to_fd = open(to_path, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_path);
		exit(99);
	}

	while ((read_count = read(from_fd, buffer, BUF_SIZE)) > 0)
	{
		if (write(to_fd, buffer, read_count) != read_count)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_path);
			exit(99);
		}
	}

	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_path);
		exit(98);
	}

	if (close(from_fd) == -1 || close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errno);
		exit(100);
	}

	exit(EXIT_SUCCESS);
}
