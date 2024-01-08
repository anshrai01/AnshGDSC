#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of  term ";
    cin>>n;
    int a=0;
    int b=1;
    cout <<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
    int next=a+b;
    cout<<next<<" ";
    a=b;
    b=next;
    }
return 0;
}

/*#include <iostream>
using namespace std;

int fibo(int n) {
    int a = 0;
    int b = 1;
    int next = 1;

    for (int i = 2; i < n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return next;
}

int main() {
    int m;
    cout << "Enter number of  term: ";
    cin >> m;
    cout<<0 <<" ";
    for (int i = 2; i < m; i++) {
        cout<< fibo(i) << " ";
    }
    return 0;
}*/
