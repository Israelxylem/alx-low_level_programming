#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{

int intType;
float floatType;
long int longint;
char charType;
long long int longlongint;

printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of long int: %zu bytes\n", sizeof(longint));
printf("Size of long int: %zu bytes\n", sizeof(longint));
printf("Size of char: %zu byte\n", sizeof(charType));

return (0);
}
