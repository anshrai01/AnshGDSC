#include <iostream>
using namespace std;
int main()

{
    int row_size;
    cout << "Enter the row size:";
    cin >> row_size;

    for (int out = 1; out <= row_size; out++)
    {
        for (int in = 1; in >=out; in--)
        if(in<=row_size-out)
            cout<<" ";
        
        else
            cout << "*";
          
        cout << "\n";
    }
}