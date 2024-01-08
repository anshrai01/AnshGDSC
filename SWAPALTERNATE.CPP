#include<bits/stdc++.h>
using namespace std;
void swapalternate(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }   
}
void printarr(int arr[],int size){
     for(int i=0;i<size;i++){
     cout<<arr[i];
     }
}
int main(){
    int evenarr[6]={1,2,3,4,5,6};
    int oddarr[5]={1,2,3,4,5};
    swapalternate(evenarr,6);
    printarr(evenarr,6);
     return 0;
}