#include "main.h"
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it
 * @filename: string
 * @letters: number of letters
 * Return: text or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char *text;
	size_t num_readedLetters;

	text = malloc((letters) * sizeof(char));

	if (!filename && !letters)
		return (0);
	fptr = fopen(filename, "r");
	if (!fptr)
		return (0);
	num_readedLetters = fread(text, sizeof(char), letters, fptr);
	if (!num_readedLetters)
		return (0);
	printf("%s", text);
	fclose(fptr);
	return (num_readedLetters);
}
