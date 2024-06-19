#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - alphabet in small case
 *Return: 0
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
