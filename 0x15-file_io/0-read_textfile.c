#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t lr, lw;
	char *b;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	if (b == NULL)
	{
		close(fp);
		return (0);
	}
	lr = read(fp, b, letters);
	close(fp);
	if (lr == -1)
	{
		free(b);
		return (0);
	}
	lw = write(STDOUT_FILENO, b, lr);
	free(buffer);
	if (lr != lw)
		return (0);
	return (lw);
}
