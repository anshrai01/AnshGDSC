#include<iostream>
using namespace std;
long countdigit(long n){
    long cnt=0;
    while(n>0){
        cnt=cnt+1;
        n=n/10;
    }
    return cnt;
}

int main (){
    long n;
    cin>>n;
    countdigit(n);
     cout<<countdigit(n);


}