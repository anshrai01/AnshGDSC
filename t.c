#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
    int main(void)
{
    int  size, i,sum=0;
    int arr[1000];
    printf("enter number of elements in array\n");
    scanf("%d", &size );
    printf("enter elements in array\t");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
        printf("reverse of array\n");
        for (int i = size-1; i>=0; i--)
        printf("%d", arr[i]);
}