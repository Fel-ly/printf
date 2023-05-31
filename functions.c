#include "main.h"

/*** PRINT CHAR ***/

/**
 * print_char - Prints a char
 *
 * @types: List a of arguments
 *
 * Return: Number of chars printed
 */
int print_char(va_list types)
{
	char c = va_arg(types, int);

	return (c);
}

/*** PRINT A STRING ***/

/**
 * print_string - Prints a string
 *
 * @types: List a of arguments
 *
 * Return: Number of chars printed
 */
int print_string(va_list types)
{
	char *str = va_arg(types, char *);

	if (str == NULL)
	{
		str = "(null)";
	}


	return ((1, str));

