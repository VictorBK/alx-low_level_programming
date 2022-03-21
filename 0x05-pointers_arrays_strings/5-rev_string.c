
/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
int i = 0;
int aux = 0;
char ltemp;

while (*(s + i) != '\0')
i += 1;
i -= 1;

while (aux < i)
{
ltemp = s[i];
s[i] = s[aux];
s[aux] = ltemp;
aux++;
i--;
}
}