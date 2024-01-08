#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    cin>>n;
     vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
    
    v.push_back(x);
    v.erase(v.begin()+1);
    }  
        for(int i=0;i<n;i++){
            int y;
            cin>>y;
    
    v.push_back(y);
    }
    v.erase(v.begin()+1,v.begin()+3);+
    for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }

    
    return 0;

}