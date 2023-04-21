#include "main.h"
#include <unistd.h>

/**
 * append_text_to_file - appends text to file at end
 * @filename: file name
 * @text_content: text want to add to file
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fptr;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		if (filename)
			return (1);
		else
			return (-1);
	}
	fptr = fopen(filename, "a");
	if (!fptr)
		return (-1);
	fprintf(fptr, "%s", text_content);
	fclose(fptr);
	return (1);
}
