#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success, returns the number of characters written.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char *str, c;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && format[1] != '\0')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else if (*format == 'c')
			{
				c = va_arg(args, int);
				_putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				while (*str)
				{
					_putchar(*str);
					count++;
					str++;
				}
			}
		}
		else
		{
			_putchar(*format);
			count++;
		} format++;
	} va_end(args);
	return (count);
}
