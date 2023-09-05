#include "main.h"

/**
 *create_file - function that creates a file.
 *@filename: name of filename
 *@text_content: data write in filename
 *
 *Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int len = 0, writen;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	while (text_content[len] != NULL)
		len++;
	writen = write(f, text_content, len);
	if (writen != length || writen == -1)
		return (-1);
	close(f);
	return (1);
}