#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a NULL terminated string to write to the file.
 *
 * Return: 1 on success
 *         Otherwise - -1.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	if (filename == NULL)
		return (-1);

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
