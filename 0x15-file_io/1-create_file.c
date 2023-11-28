#include "main.h"
/**
 * create_file - Creates a file and writes text content to it.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: On success, returns 1. On failure, returns -1.
 *
 * Description: This function creates a file with the specified name and writes
 * the given text content to it. If the file already exists, its content is
 * truncated. If the file does not exist, it is created with read and write
 * permissions for the owner only.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t num_of_letters;
	int file;

	if (!filename)
		return (1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		num_of_letters = write(file, text_content, _strlen(text_content));
		if (num_of_letters == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}

/**
 * _strlen - Computes the length of a string.
 *
 * @s: A pointer to a string.
 *
 * Description: This function calculates the length
 * of the string pointed to by @s.
 *
 * Return: The length of the string (number of characters).
 *
 * Author: Ahmed Magdy
 * School: ALX CO 1 BLENDED
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
