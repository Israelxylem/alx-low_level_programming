#include<stdio.h>
/*
 *main- print the sizes of data types
 *
 *return: always 0 (success)
 */

int main(void)
{
int intType;
float floatType;
long int longType;
char charType;

printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of long int: %zu bytes\n", sizeof(longType));
printf("Size of char: %zu byte\n", sizeof(charType));
return (0);
}
