#include <stdio.h>
int main(void)
{
	// Note that fun() is not declared
	printf("%c\n", fun());
	return 0;
}

int fun()
{
return 3;
}
