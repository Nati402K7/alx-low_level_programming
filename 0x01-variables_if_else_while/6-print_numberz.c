#include <stdio.h>
/**
* main - Entry point
* Description: A Program will assign a randome number to the variable
* Return: 0 (Success)
*/
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar (digit + '0');
digit++;
}
putchar ('\n');
return (0);
}
