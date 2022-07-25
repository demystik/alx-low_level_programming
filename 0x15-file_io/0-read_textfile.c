#include "main.h"

/**
 * read_textfile - This function reads a text file and print
 * it to the posix standart output
 * @filename: The name of the file
 * @letters: The letters to print
 * Return: the actual numbers of letters it could read and print
 * or 0 if the file can not be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_word;
	char *buffer;

	if (!(filename))
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	num_read = read(fd, buffer, letters);
	num_word = write(STDOUT_FILENO, buffer, num_read);

	close(fd);

	free(buffer);

	return (num_word);

}

