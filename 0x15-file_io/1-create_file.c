#include "holberton.h"

/**
 * create_file -function that creates a file.
 * @filename : filename
 * @text_content : text
 * Return: 1 on success, -1 failed
 */
int create_file(const char *filename, char *text_content)
{
	int file = 0, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}
	}

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file < 0)
		return (-1);

	write(file, text_content, len);

	return (1);
}
