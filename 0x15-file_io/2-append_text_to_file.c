#include "main.h"
/**
 * append_text_to_file - appends text to the file
 * @filename: name of the file to append text in
 * @text_content: text content to be appended
 * Description: appends text to file
 * Return: 1 on success | -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t txt_len;
	ssize_t writer;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	txt_len = 0;

	while (text_content[txt_len] != '\0')
		txt_len++;

	writer = write(file, text_content, txt_len);

	if (writer == -1)
	{
		close(file);
		return (-1);
	}

	close(file);

	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
		return (-1);

	return (1);
}
