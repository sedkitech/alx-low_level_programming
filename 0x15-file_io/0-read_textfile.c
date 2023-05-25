#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - prints text of file
 * @filename: filename
 * @letters: letters to print
 * Return: number or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *memory_size = malloc(sizeof(char) * letters);
	int file_des;
	ssize_t nb_bytes_written, nb_bytes_readed;

	if (!memory_size)
		return (0);
	if (!filename)
		return (0);
	file_des = open(filename, O_RDONLY, 0);
	if (file_des < 0)
		return (0);
	nb_bytes_readed = read(file_des, memory_size, letters);
	if (nb_bytes_readed < 0)
		return (0);
	nb_bytes_written = write(1, memory_size, nb_bytes_readed);
	if ((nb_bytes_readed != nb_bytes_written) || nb_bytes_written < 0)
		return (0);
	free(memory_size);
	close(file_des);
	return (nb_bytes_readed);
}
