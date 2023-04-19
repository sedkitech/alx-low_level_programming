#include "main.h"
#include <sys/stat.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: write to file
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fptr;
	char *mode = "a";

	if (!filename)
		return (-1);
	if (!text_content)
	{
		fptr = fopen(filename, "w");
		fclose(fptr);
		return (1);
	}
	if (text_content == mode)
		fptr = fopen(filename, text_content);
	else
	{
		fptr = fopen(filename, text_content);
		chmod(filename, S_IRUSR | S_IWUSR);
	}
	fclose(fptr);
	return (1);
}
