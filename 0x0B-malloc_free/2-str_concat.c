#include "main.h"

/**
 * str_concat - hello
 * @s1: s
 * @s2: s
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
int k = 0;
char *str;

if (s1 == 0 && s2 == 0)
return (0);

while (s1 != 0 && s1[i] != '\0')
{
i++;
}

while (s2 != 0 && s2[j] != '\0')
{
j++;
}

str = malloc(i + j + 1);

if (str == 0)
return (0);

while(k < i)
{
str[k] = s1[k];
k++;
}

k = 0;

while (k <= i + j)
{
str[k + i] = s2[k];
k++;
}

str[k] = '\0';

return (str);
}
