#include <stdio.h>

/**
  * main - prints alphabet in lowercase
  * Return: 0 exit code of the program if successful.
 */
int main(void) 
{
    
    for(int x = 'A'; x <= 'Z'; x++)
    {
        putchar(tolower(x));
    }

    return (0);
}
