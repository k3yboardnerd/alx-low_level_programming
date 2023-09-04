#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: the text/output to be written on the file
 * Description: creates the file
 * Return: 1 on success | -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t txt_len = 0;
	ssize_t writer;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[txt_len] != '\0')
			txt_len++;

		writer = write(file, text_content, txt_len);

		if (writer == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (-1);
}
