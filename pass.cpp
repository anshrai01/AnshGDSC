#include<iostream>
using namespace std;
int update(int a){
    a=a-5;
    cout<< a;
}
int main(){
    int a=15;
    update(a);
    cout<<a<<endl;
}