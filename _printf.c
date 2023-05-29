#include "main.h"

/**
 * _buffer - print buffer contents
 * @buffer: content to be printed
 * @index: index of buffer
 *
 * Return: void
 */

void _buffer(char buffer[], int *index)
{
	if (*index > 0)
		write(1, &buffer[0], *index);

	*index = 0;
}

/**
 * _printf - print a formatted string
 * @format: format string
 * Return: count of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0, index = 0, i;
	char buffer[BUFF_SIZE];
	va_list args;

	if (!format)
		return (-1);
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[index++] = format[i];
			if (index == BUFF_SIZE)
				_buffer(buffer, &index);
			count++;
		}
		else
		{
			_buffer(buffer, &index);
			++i;
			count++;
		}
	}

	_buffer(buffer, &index);

	va_end(args);
	return (count);
}
