//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
vector<int> factorial(int N){
    vector<int> ans;
    ans.push_back(1);
    int c=0;
    for(int i=2;i<=N;i++){
        for(int j=0;j<ans.size();j++){
            int x=ans[j]*i+c;
            ans[j]=x%10;
            c=x/10;
        }
        while(c){
            ans.push_back(c%10);
            c/=10;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends