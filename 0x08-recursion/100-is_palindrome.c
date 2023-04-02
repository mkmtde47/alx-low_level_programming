#include "main.h"

/**
  * is_palindrome - A caller function for palindromes
  * @s: Pointer to a char (string)
  * Return: 1 if palindrome, 0 if not a palindrome
  */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s) - 1;
	return (palindrome(s, 0, len));
}

/**
  * palindrome - A function that checks for palindromes
  * @s: Pointer to a char
  * @starts: Integer that indexes a string
  * @ends: Integer that indexes a string
  * Return: 1 if a palindrome, 0 if not a palindrome
  */
int palindrome(char *s, int starts, int ends)
{
	if (ends == 1 || ends == 0)
	{
		return (1);
	}
	else if (*(s + starts) == *(s + ends))
	{
		return (palindrome(s, starts + 1, ends - 1));
	}
	else
	{
		return (0);
	}
}
