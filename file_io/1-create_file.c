#include "main.h"

/**
 *create_file - function that creates files
 *@filename: the name of the file to create
 *@text_content: null terminated string to write to the file
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int rd, wrte, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];
		     len++);
	}
	rd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrte = write(rd, text_content, len);

		if (rd == -1 || wrte == -1)
			return (-1);
	close(rd);

	return (1);
}
