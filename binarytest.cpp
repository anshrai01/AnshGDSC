#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if (arr[mid]==key){
            return mid;
        }
        if(arr [mid]>key){
           end=mid-1;
        }
        else{
            start=mid+1;
            
        }
        

    }
    return 1;
} 
int main(){
    int arr[5]={2,3,4,5,6};
    int key=6;
    int result= binarysearch(arr,5,key);
    cout<<result;
    return 0;

}