#include "main.h"

/**
 * is_printable - Checks if a character is printable
 * @c: The character to be evaluated
 *
 * Return: 1 if c is printable, 0 otherwise
 * Authors: Erick Buka
 */
int is_printable(char c)
{
	/* Printable characters have ASCII values between 32 and 126 */
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Appends ASCII in hexadecimal code to buffer
 * @buffer: Array of characters
 * @index: Index at which to start appending
 * @ascii_code: ASCII code
 *
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int index)
{
	char hex_map[] = "0123456789ABCDEF";

	/* Ensure ascii_code is positive */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[index++] = '\\';
	buffer[index++] = 'x';

	/* Convert ASCII code to hexadecimal digits */
	buffer[index++] = hex_map[ascii_code / 16];
	buffer[index] = hex_map[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Checks if a character is a digit
 * @c: The character to be evaluated
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
	/* Digits have ASCII values between '0' and '9' */
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Casts a number to the specified size
 * @num: Number to be casted
 * @size: Number indicating the type to be casted
 *
 * Return: Casted value of num
 */
long int convert_size_number(long int num, int size)
{
	/* Size checks for type casting */
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Casts an unsigned number to the specified size
 * @num: Number to be casted
 * @size: Number indicating the type to be casted
 *
 * Return: Casted value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	/* Size checks for type casting */
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
