/**
 * we initialize a helping variable
 * to assist in returning one of
 * our parameters pointers haystack
 */

while (*haystack != '\0')
{
char h = haystack;
char n = needle;
while (*n != '\0' && *haystack == *n)
{
haystack++;
n++;
}
if (!*n)
return (h);
haystack++;
}
return ('\0');
}
