#include <iostream>
using namespace std;

int main()
{
    int number = 30;
    int* p; // Declaring a pointer variable named 'p'

    p = &number; // 'p' now holds the address of the 'number' variable

    cout << "Address of number variable is: " << &number << endl;
    cout << "Address of p variable is: " << p << endl;
    cout << "Value of p variable is: " << *p << endl;

    return 0;
}000
