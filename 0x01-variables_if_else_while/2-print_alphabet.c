#include <stdio.h>
/**
* main - entry function
* Return: 0 (Success)
*/
int main(void)
{
  	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		purchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
