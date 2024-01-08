#include<iostream>
using namespace std;
int findMaximun(int num1,int num2){
if (num1>num2){
return num1; 
} 
else{
return num2;
}
}
int main(){
    int num1;
    cin>>num1;
    int num2;
    cin>>num2;
    int maximun=findMaximun(num1,num2);
    //int minimum=findMinimum(num1,num2);;
    cout<<" maximum number is"<<maximun<<endl;
    return 0;

    
}