#include <iostream>
using namespace std;

void evenCheck(int a) {
    int b =( a % 2);
    if (b == 0) {
        cout << "EVEN NUMBER";
    } else {
        cout << "ODD NUMBER";
    }
}

int main() {
    while (true) {
    int number;
    cout << "Enter a number to check: ";
    cin >> number;
    evenCheck(number);
    cout << endl;
    }
    return 0;

}