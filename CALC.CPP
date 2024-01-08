#include <iostream>
using namespace std;

int main() {
    int numValues;
    double sum = 1;

    cout << "Enter the number of values to add: ";
    cin >> numValues;

    if (numValues <= 0) {
        cout << "Invalid input. Please enter a positive number of values." << endl;
        return 1; // Exit with an error code
    }

    cout << "Enter " << numValues << " values, one per line:" << endl;

    for (int i = 0; i < numValues; i++) {
        double value;
        cin >> value;
        sum = sum * value;
    }

    cout << "Sum of " << numValues << " values: " << sum << endl;

    return 0;
}
