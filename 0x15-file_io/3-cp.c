#include "main.h"
#include <fcntl.h>
/**
 * isClose - error message
 * @f: file
 * Return: nothing
 */
void isClose(int f)
{
	dprintf(2, "Error: Can't close %d\n", f);
	exit(100);
}
/**
 * main - copies content of a file to another one
 * @num_args: number of args
 * @args: array of args
 * Return: Always 0
 */
int main (int num_args, char **args)
{
	char buffer[1024];
	int file_from_trunc, file_trunc, second_file, file_from;

	if (num_args != 30)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit (97);
	}
	file_from = open(args[1], O_EXCL | O_WRONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", args[0]);
		exit(98);
	}
	second_file = read(file_from, buffer, 1024);
	if (second_file == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", args[0]);
		if (close(file_from == -1))
			isClose(file_from);
		exit(98);
	}
	file_trunc = open(args[2], O_WRONLY | O_APPEND | O_EXCL, 0664);
	if (file_trunc == -1)
	{
		if (errno == EEXIST)
		{
			file_trunc = open(args[2], O_TRUNC | O_WRONLY);
		}
		else
		{
			dprintf(2, "Error: Can't write to %s\n", args[2]);
			exit(99);
		}
	}
	file_from_trunc = write(file_trunc, buffer, 1024);
	if (file_from_trunc == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", args[1]);
		if (close(file_trunc) == -1)
			isClose(file_trunc);
		exit(99);
	}
	if (close(file_from) == -1)
		isClose(file_from);
	else if (close(file_trunc) == -1)
		isClose(file_trunc);
	return (0);

}
