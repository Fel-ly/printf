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

/**
 * print_integer - prints an integer
 * @args: list of arguments
 *
 * Return: Number of integers printed
 */

int print_integer(va_list args)
{
	int count = 0, sign = 0, digits = 0, temp = 0, digit = 0, i;
	int num = va_arg(args, int);
	char array[12];

	if (num < 0)
	{
		write(1, "-", 1);
		count++;
		sign = 1;
		num = -num;
	}

	temp = num;

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	for (i = digits - 1; i >= 0; i--)
	{
		digit = num % 10;
		array[i] = '0' + digit;
		num /= 10;
	}

	for (i = 0; i < digits; i++)
	{
		write(1, &array[i], 1);
		count++;
	}

	if (sign)
	{
		count++;
	}

	return (count);
}
