#include <unistd.h>
/**
 * main - Entry point
 * Description: A C program that prints a new line, to the standard error
 * Return: 1
 */
int main(void)
{
char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, quo, 59);
return (1);
}
