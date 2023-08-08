#include "main.h"

/**
 *append_text_to_file - appends text of the end of a file
 *@filename: name of the file
 *@text_content : null terminated string to add at the the end of the file
 *Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int wrte,rd;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	rd = open(filename, O_WRONLY | O_APPEND);
	wrte = write(rd, text_content, len);

	if (rd == -1 || wrte == -1)
		return (-1);
	close (rd);

	return (1);
}
