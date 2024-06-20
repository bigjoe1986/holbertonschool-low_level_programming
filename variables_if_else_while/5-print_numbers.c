#include <stdio.h>

/**
 * main - write a program that print numbers
 *
 * Return: Always 0.
 */
int main(void)
{
int numbers;

for (numbers = '0'; numbers <= '9'; numbers++)
{
	putchar(numbers);
}
	putchar('\n');

return (0);

}
