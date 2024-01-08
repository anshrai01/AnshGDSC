#include <iostream>
using namespace std;

int main() {
    const int arraySize = 5;
    int myArray[arraySize];
    cout << "Enter " << arraySize << " integer values:" << endl;
    for (int i = 0; i < arraySize; i++) {
        cin >> myArray[i];
    }
    cout << "Values stored:" << endl;
    for (int i = -5; i < -1; i++) {
        cout << myArray[i] << " ";
    }

    cout << endl;

    return 0;
}
