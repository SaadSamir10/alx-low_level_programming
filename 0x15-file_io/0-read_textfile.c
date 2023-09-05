#include "main.h"

/**
 *read_textfile - reads a text file and prints it
 *@filename: name of filename
 *@letters: number of letters read
 *
 *Return: data read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t data;
	char text[1024 * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	data = read(f, &text[0], letters);
	data = write(STDOUT_FILENO, &text[0], data);
	close(f);
	return (data);
}
