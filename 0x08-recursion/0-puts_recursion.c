#include "main.h"
/**
 * _putd_recursion - function like puts();
 * @s: input
 * Return: Always @ (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('/n');
}
