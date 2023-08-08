#include "main.h"

/**
 * append_text_to_file - appends text in a file
 * @filename: name of file
 * @text_content: added content
 * Return: integer
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int nl;
	int rwr;

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	if (text_content)
	{
		for (nl = 0; text_content[nl]; nl++)
		{
			;
		}
		rwr = write(fp, text_content, nl);
		if (rwr == -1)
			return (-1);
	}
	close(fp);
	return (1);
}
