// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<pair<int, int>> ans;
    void towerOfHanoi(int n, int A, int C, int B) {
        if(n == 0) {
            return;
        }
        towerOfHanoi(n-1, A, B, C);
        ans.push_back({A, C});
        towerOfHanoi(n-1, B, C, A);
    }

    vector<int> shiftPile(int N, int n){
        // code here
        towerOfHanoi(N, 1, 3, 2);
        return {ans[n-1].first, ans[n-1].second};
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends>
