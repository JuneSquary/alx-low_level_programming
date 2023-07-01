#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char low, j, a;
j = 'j';
a = 'a';
for (low = 'a'; low <= 'z'; low++)
{
if (low != j && low != a) 
putchar(low);
}
putchar('\n');
return (0);
}
