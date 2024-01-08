#include <stdio.h>
int main() 
{
    char str[100];
    scanf("%[^\n]s", &str);
    printf("hello world\n");
    printf("%s",str);
    return 0;
}