#include "main.h"

/**																																	   
 * _strstr - locates a substring																										  
 * @haystack: pointer to the string to search																							 
 * @needle: pointer to the substring to find																							  
 *																																		
 * Return: pointer to the beginning of the located substring,																			 
 *			   or NULL if the substring is not found																					
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;
	
	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return haystack;
		}
		haystack++;
	}
	return (0);
}
