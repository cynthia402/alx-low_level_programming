#include "hash_tables.h"
/**
 * Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;
	hash = 5381;
	while ((count = *str++))
		hash = ((hash << 5) + hash) + count;
	return (hash);
}
