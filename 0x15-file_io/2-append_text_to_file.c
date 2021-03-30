#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename : filename
 * @text_content : text
 * Return: 1 on success and -1 failed
 */
int append_text_to_file(const char *filename, char *text_content)
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

	file = open(filename, O_WRONLY | O_APPEND);

	if (file < 0)
		return (-1);

	write(file, text_content, len);

	return (1);
}
