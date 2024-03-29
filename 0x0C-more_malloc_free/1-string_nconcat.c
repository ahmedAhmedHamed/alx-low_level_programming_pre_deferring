#include "main.h"

/**
  * _strlen - strlen
  * @s: String to count
  * Return: String length
  */
unsigned int _strlen(char *s)
{
int c = 0;

for (c = 0; *s != '\0'; s++)
{
c++;
}

return (c);
}

/**
 * string_nconcat - hello
 * @s1: s
 * @s2: s
 * @n: s
 * Return: s
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0;
unsigned int j = 0;
char *myStr;
if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";
/*allocating memory*/
if (n < _strlen(s2))
myStr = malloc((_strlen(s1) + n + 1) * sizeof(char));
else
myStr = malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(char));
if (myStr == 0)
return (0);
/*copying s1 into new string*/

while (s1[i] != '\0')
{
myStr[i] = s1[i];
i++;
}

for (j = 0; j < n && j < _strlen(s2) && s2[j] != '\0'; j++)
{
myStr[i] = s2[j];
i++;
}

myStr[i] = '\0';

return (myStr);
}
