#include "main.h"
#include <stdlib.h>

/**
 *read_textfile - reads a text file and prints it to the posix
 *@filename: text to being read
 *@letters: number of letters to be read
 *Return: actual number of letters it should read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t rd;
	ssize_t wrte;
	ssize_t alfile;

	rd = open(filename, O_RDONLY);

	if (rd == -1)
		return (0);
	buf = malloc(sizeof(char) *letters);
	alfile = read(rd, buf, letters);
	wrte = write(STDOUT_FILENO, buf, alfile);

	free(buf);
	close(rd);
	return(wrte);
}
