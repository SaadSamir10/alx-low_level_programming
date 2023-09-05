#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_file - function that creates a file.
 *@filename: name of filename
 *@text_content: data write in filename
 *
 *Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, f;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[i] != '\0')
	{
		i++;
	}

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	write(f, text_content, i);

	return (1);
}
