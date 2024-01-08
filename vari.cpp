#include <iostream>
using namespace std;

void change(int data); // Pass the parameter by reference

int main()
{
    int data = 3;
    change(data);
    cout << "Value of the data is: " << data << endl; // Print the original value first
     // The function will modify the value of 'data'
    return 0;
}

void change(int data) // Accept the parameter by reference
{
    data = 5; // Modifying 'data' will now reflect in the 'main' function
    cout << data << endl; // Print the updated value
}
