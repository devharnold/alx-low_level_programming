#include "main.h"

/**
 * append_text_to_file - Appending text
 * @filename: A pointer
 * @text_content: String added to at the end
 * Return: Upon function name Null (-1)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, o, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}

