#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 if exited properly, otherwise, non-zero integer
 **/
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of long int: %d byte(s)\n", sizeof(long int));
printf("Size of long long: %d byte(s)\n", sizeof(long long int));
printf("Size of float: %d byte(s)\n", sizeof(float));
return (0);
}
