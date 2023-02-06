#include <stdio.h>

/**
 * main - prints the ASCII value of a character
 *
 * Return: 0
 */
int main(void)
{
	char a;

	printf("Please input a character to print it ASCII value: ");
	scanf("%c", &a);
	printf("The ASCII value of your input will be: \n %d \n", a);
	return (0);
}
