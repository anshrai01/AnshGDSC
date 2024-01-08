#include <iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"printing the array"<<endl;
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    } 
      cout<<"printing done"<<endl;
}
    int main(){
    int number[15];
    cout<< "value at 14 index"<<number[14]<<endl;
    int second[3]={5,7,11};
    int n=3;
    int numofele=sizeof(second)/sizeof(int);
    cout<<"num of elements in second is"<<numofele<<endl;
    cout<<"value at 2 index"<<second[2]<<endl;
    cout<<"printing the array";
    for(int i=0;i<n;i++){//normal printing
        cout<<second[i]<<" " ;
    }
    cout<<endl;
    int third[2]={2,7};
    n=2;
    printArray(third,2);//printing with function

    cout<<"value at third index"<<third[0]<<endl;
    return 0;
    }