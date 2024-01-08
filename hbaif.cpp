#include<bits/stdc++.h>
using namespace std;
void reverseNum(int ritik[],int n){
    
    for(int i=n-1;i>=0;i--){
        cout<<ritik[i];
        
    }
    
}
int main(){
    int ritik[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ritik[i];
    }
     reverseNum(ritik,n);
     cout<<endl;
}