#include <iostream>
using namespace std;

int main() {
    int a[10], n, j;
    cout << "Enter the number to convert: ";
    cin >> n;

    for (j = 0; n > 0; j++) {
        a[j] = n % 2;
        n = n / 2;
    }

    cout << "Binary of the given number = ";
    for (int i= j-1; i >= 0; i--) {
        cout << a[i];
    }

    return 0;
}
