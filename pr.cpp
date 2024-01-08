#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the row size:";
    int row_size, out, in, p;
    cin >> row_size;
    for (out = 1; out <= row_size; out++)
    {
        for (in = row_size - 1; in >= out; in--)
            cout << " ";
        for (p = 1; p <= out; p++)
            cout << "* ";
        cout << "\n";
    }
}
