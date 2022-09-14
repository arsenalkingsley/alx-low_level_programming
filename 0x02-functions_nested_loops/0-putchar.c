#include "main.h"
#include <string.h>

/**
 * main - the main programs to print putchar
 * Return:returns 0
 */

int main(void)
{
char str[] = "_putchar";
int ch;
for (ch = 0; ch < 8; ++ch)
_putchar(str[ch]);
_putchar('\n);

return (0);
}
