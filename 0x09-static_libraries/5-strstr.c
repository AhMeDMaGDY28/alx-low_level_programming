#include "main.h"
#include "string.h"
/**
 * _strstr - Locates a substring within a string.
 *
 * @haystack: A pointer to the null-terminated string to be searched.
 * @needle: A pointer to the null-terminated substring to search for.
 *
 * Description: This function searches for the first
 * occurrence of the null-terminated
 * substring 'needle' in the null-terminated string
 * 'haystack.' It iterates through the
 * characters in 'haystack' and compares them to the
 * characters in 'needle' to find a match.
 * If a match is found, it returns a pointer to the
 * location of the first character of the substring
 * within the 'haystack.' If no match is found, it returns NULL.
 *
 * Return: A pointer to the first occurrence of the 'needle'
 * substring in the 'haystack' string if found,
 * or NULL if no match is found.
 */
char *_strstr(char *haystack, char *needle)
{

	return (strstr(haystack, needle));
}
