#include <iostream>
using namespace std;
int main(){
cout<<"enter number";
long long num,ans=0,r;
cin >> num;
while (num!=0)
{
    r=num%10;
    ans=ans*10+r;

    num=num/10;
}
cout<<"reverse is" <<ans <<endl;
return 0;
}