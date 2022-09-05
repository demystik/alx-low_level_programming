#include "main.h"

/**
 * _strstr - this function locates a substring
 * @haystack: The pointer to the main string
 * @needle: The pointer to the substring
 * Return: The string pointer should be returned
 */

char *_strstr(char *haystack, char *needle)
{
char *bhaystack;
char *pneedle;

while (*haystack != '\0')
{
bhaystack = haystack;
pneedle = needle;


while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
{
haystack++;
pneedle++;
}
if (!*pneedle)
return (bhaystack);
haystack = bhaystack + 1;
}
return (0);
}
