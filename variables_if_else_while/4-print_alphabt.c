#include <stdio.h>


/**
 * main - Write a program that prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	if (alphabet != 'e' && alphabet != 'q')
	{
		putchar(alphabet);
	}

}
putchar ('\n');
return (0);
}
