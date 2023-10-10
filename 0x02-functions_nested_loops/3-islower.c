#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * This code is made to check for lowercase character.
 * It checks if the ASCII value of 'c' is within the range of lowercase letters.
 * Code made by Ahmed Magdy.
 * ALX CO 1 blended
 *
 * @c: The character to be checked.
 *
 * Return: 1 if 'c' is lowercase, 0 otherwise.
 */
int _islower(int c)
{
    int b;

    b = c;
    if (b <= 122 && b >= 97)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

