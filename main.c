#include"main.h"
int main()
{
	int x;
	x = _printf("STRINGS %s and CHARS %c \n \0", "HELLO\0", 'l');
	printf("%d", x);
	return (0);
}
