#include "main.h"
/**
 * read_textfile - reads text file and prints it to the POSIX STD
 * @filename: the filename to be read
 * @letters: size of letters to be read and printed
 * Description: reads text file and output it to POSIX STD
 * Return: 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	char *letter_size;
	ssize_t reader;
	ssize_t writer;

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	letter_size = malloc(sizeof(char) * letters);

	if (letter_size == NULL)
	{
		close(file_d);
		return (0);
	}

	reader = read(file_d, letter_size, letters);

	if (reader == -1)
	{
		(free(letter_size), close(file_d));
		return (0);
	}

	writer = write(STDOUT_FILENO, letter_size, reader);

	if (writer == -1 || writer != reader)
	{
		(free(letter_size), close(file_d));
		return (0);
	}

	free(letter_size);
	close(file_d);
	return (writer);
}
