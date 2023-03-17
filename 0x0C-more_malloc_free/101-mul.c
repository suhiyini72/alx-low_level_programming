#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
* is_digit - checks if a string contains a non-digit char
* @s: string to be evaluated
* Return: 0 if a non-digit is found, 1 otherwise
*/

int main(int argc, char **argv)
{
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
}
