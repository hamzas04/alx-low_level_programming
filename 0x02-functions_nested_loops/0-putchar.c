#include <string.h>
#include "main.h"

/**                                                                                                                                            
 * main - Entry point                                                                                                                          
 *                                                                                                                                             
 * Description: It prints '_putchar', followed by a new line.                                                                                  
 *                                                                                                                                             
 * Return: Always 0                                                                                                                            
 */
int main(void)
{
        char str[] = "_putchar";
        int length = strlen(str);

        int i = 0;
		
        while (i < length)
        {
                _putchar(str[i]);
                i++;
        }
        _putchar('\n');

        return (0);
}
