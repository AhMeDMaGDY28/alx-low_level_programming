/**
 * hash_djb2 - Computes the hash value for a given string using the djb2 algorithm.
 * @str: The string to compute the hash value for.
 *
 * This function computes the hash value for a given string using the djb2 algorithm.
 *
 * Return: The computed hash value.
 *
 * Authors: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
