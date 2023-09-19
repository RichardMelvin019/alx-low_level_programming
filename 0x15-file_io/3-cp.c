#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments vector
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int src, d, r = 1024, w, src_close, d_close;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	io_stat_check(src, -1, argv[1], 'O');
	d = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	io_stat_check(d, -1, argv[2], 'W');
	while (r == 1024)
	{
		r = read(src, buff, sizeof(buff));
		if (r == -1)
			io_stat_check(-1, -1, argv[1], 'O');
		w = write(d, buff, r);
		if (w == -1)
			io_stat_check(-1, -1, argv[2], 'W');
	}
	src_close = close(src);
	io_stat_check(src_close, src, NULL, 'C');
	d_close = close(d);
	io_stat_check(d_close, d, NULL, 'C');
	return (0);
}

/**
 * io_stat_check - checks if a file can be opened or closed
 * @s: file descriptor of the file
 * @filename: name of the file
 * @m: mode
 * @fp: file descriptor
 * Return: void
 */
void io_stat_check(int s, int fp, char *filename, char m)
{
	if (m == 'C' && s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		exit(100);
	}
	else if (m == 'O' && s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (m == 'W' && s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
