#include <stdio.h>
/**
* main - Entry point
* Description: A Program will assign a randome number to the variable
* Return: 0 (Success)
*/
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar (ch);
ch--;
}
putchar ('\n');
return (0);
}
