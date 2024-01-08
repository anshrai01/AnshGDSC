/*#include <iostream>
using namespace std;
int maxarray(int arr[],int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
    maxi=max(maxi,arr[i]);
}
return maxi ;
}
int main(){
    int n;
    cin>>n;
    int ansh[1000];
    for (int i=0;i<n;i++){
        cin>>ansh[i];
    }
    cout<<"printing the array";
    for(int i=0;i<n;i++){//normal printing
        cout<<ansh[i]<<" " ;
    }
    cout<<endl;
   cout<< maxarray(ansh,n)<<endl;
   return 0;
}*/
#include <iostream>

int findMax(int arr[], int size) {
    int max = arr[0]; // Assume the first element is the maximum

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Invalid array size. Exiting." << std::endl;
        return 1; // Exit with an error code
    }

    int arr[size];

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int maximum = findMax(arr, size);

    std::cout << "Maximum element in the array: " << maximum << std::endl;

    return 0;
}
