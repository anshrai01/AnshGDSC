#include <iostream>
using namespace std;
int main ()
{
    int row_size;
    cout <<"enter row size";
    cin>>row_size;
    for (int in=1;in<=3;in++)
    {
         for (int out=1;out<=row_size;out++)
            cout << out;
    cout<<endl;
    }
}
