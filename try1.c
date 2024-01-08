#include<stdio.h>
int main()
{
    while(1)
    {
        int i,fact=1,number;
    printf("enter no");
    
    scanf("%d",&number);
        for(i=1;i<=number;i++){
         fact=fact*i;
    }
    printf("factorial of %d is: %d\n",number,fact);

    }
}
