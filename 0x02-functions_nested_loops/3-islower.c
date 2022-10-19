#include "main.h"
/**
 * _islower - tests wheather a character is a
 * lowercase letter from the English alphabet.
 * @c: character to test.
 * Return: 1 if a lowercase letter is presented, 0 if otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
