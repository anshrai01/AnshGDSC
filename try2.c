#include<stdio.h>
int main(){
   while(3){
     printf("enter a number");
int i,fact=1,number;
scanf("%d",&number);
for(i=1;i<=number;i++){
    fact=fact*i;
}
 printf("factorial of %d is %d\n",number,fact);
   }
}

