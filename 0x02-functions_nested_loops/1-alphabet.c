#include "main.h"

/**
  * print_alphabet - Make the alphabet
  *
  * Return: void
  */
void print_alphabet(void)
{
	char u;
	int printed = 0;

	for (u = 'c'; u <= 'z'; u++)
	{
		_putchar(u);
		printed = 1;
	}
	if (printed)
	{
		_putchar('\n');
	}
	return;
}
