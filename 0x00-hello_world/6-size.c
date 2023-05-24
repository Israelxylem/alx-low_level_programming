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

printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of long  int: %zu byte(s)\n", sizeof(longint));
printf("Size of long long int: %zu byte(s)\n", sizeof(longlongint));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));

return (0);
}
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
