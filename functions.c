#include "main.h"

/**
 * print_char - Prints a char
 * @args: List a of arguments
 *
 * Return: Number of chars printed
 */
int print_char(va_list args)
{
	int count = 0;
	char c = (char)va_arg(args, int);

	write(1, &c, sizeof(c));
	count++;
	return (count);
}

/**
 * print_string - Prints a string
 * @args: List of arguments
 *
 * Return: Length of string
 */
int print_string(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str != '\0')
	{
		write(1, str, 1);
		count++;
		str++;
	}

	return (count);
}

/**
 * print_percent - Prints a percent sign
 * @args: List of arguments
 *
 * Return: Number of chars printed
 */
int print_percent(va_list args)
{
	int count = 0;

	UNUSED(args);

	write(1, "%%", 1);
	count++;
	return (count);
}
