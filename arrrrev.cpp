#include <iostream>
using namespace std;
int main() {
    int arr[1000];

    int n;
    // Inputting the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    // Inputting the array
    cout << "Enter an array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Printing the reverse of the array
    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";

    return 0;
}
