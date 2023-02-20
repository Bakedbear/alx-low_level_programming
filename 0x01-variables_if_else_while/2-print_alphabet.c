#include <stdio.h>

/**
  * main - prints alphabet in lowercase
  * Return: 0 exit code of the program if successful.
 */
int main() 
{
    
    int x;
    
    for (x = 'a'; x <= 'z'; x++)
    {
        putchar(x);
    }
    putchar('\n');
    return (0);
}
