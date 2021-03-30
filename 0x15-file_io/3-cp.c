#include "holberton.h"
/**
 * main - program that copies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file, count, len, format;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	count = open(argv[1], O_RDONLY);
	if (count < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	do {
		len = read(count, buffer, 1024);
		format = write(file, buffer, len);
	} while (len == 1024);
	if (len < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);
	if (format < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]), exit(99);
	if (close(count) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", count), exit(100);
	if (close(file) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file), exit(100);
	return (0);
}
