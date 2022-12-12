#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
long int k;
long long int j;
char m;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(k));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(j));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
