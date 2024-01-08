#include<stdio.h> 
int main() 
{ 
 printf("Enter a number: ");   
 long long i,fact=1,number;    
 


  scanf("%d",&number);    
    for(i=1;i<=number;i++)  
    fact=fact*i;    
      
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
} 
