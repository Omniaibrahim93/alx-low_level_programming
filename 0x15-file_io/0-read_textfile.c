#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @letters: The number of letters the
 * @filename: A pointer to the name of the file.
 * Return: If the function fails or filename is NULL - 0.
 * or - the actual number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t w, r, o;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
