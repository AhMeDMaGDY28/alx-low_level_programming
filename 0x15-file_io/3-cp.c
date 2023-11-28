#include "main.h"
/**
 * main - Entry point for the `cp` program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always returns 0 on success.
 *
 * Description:
 * - This program copies the content of one file to another.
 * - It takes two command-line arguments: file_from and file_to.
 * - If the number of arguments is not 3, it prints an error message
 *   and exits with status 97.
 * - If it cannot read from the source file, it prints an error message
 *   and exits with status 98.
 * - If it cannot write to the destination file, it prints an error message
 *   and exits with status 99.
 * - The actual copying is done by the `copy` function.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
int main(int argc, char **argv)
{
	int file_from, file_going;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_going = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_going == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	copy(file_from, file_going, argv[1], argv[2]);
	close_file_d(file_from);
	close_file_d(file_going);
	return (0);
}
/**
 * close_file_d - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to close.
 *
 * Description:
 * - Closes the given file descriptor.
 * - If an error occurs while closing, it prints an error message
 *   and exits with status 100.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void close_file_d(int fd)
{
	int flag;

	flag = close(fd);
	if (flag == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * copy - Copies the content from one file to another.
 * @file_from: File descriptor of the source file.
 * @file_going: File descriptor of the destination file.
 * @f_from: Name of the source file.
 * @f_to: Name of the destination file.
 *
 * Description:
 * - Reads the content from the source file and writes it
 * to the destination file.
 * - Handles errors during reading or writing by printing an error message
 *   and exiting with the corresponding status.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void copy(int file_from, int file_going, char *f_from, char *f_to)
{
	int printed, flag;
	char *buff[1024];

	printed = read(file_from, buff, 1024);
	if (printed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	while (printed)
	{
		flag = write(file_going, buff, printed);
		if (flag != printed)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
			exit(99);
		}
		printed = read(file_from, buff, 1024);
		if (printed == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
			exit(98);
		}
	}
}
