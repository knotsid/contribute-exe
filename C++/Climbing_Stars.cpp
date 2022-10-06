#include <bits/stdc++.h>
using namespace std;
long long int mod = 1e9+7;

int CountWays(int n, int* dp){
    if(n==0 || n==1) return dp[n] = 1;
    if(dp[n]!=-1) return dp[n]%mod;
    int left = CountWays(n-1,dp)%mod;
    int right = CountWays(n-2,dp)%mod;
    return dp[n] = (left + right)%mod;
}

int main(){
    int t;
    cout<<"Enter the number of test cases : ";
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter the number of stairs : ";
        cin>>n;
        int* dp = new int[n+1];
        for(int i=0;i<=n;i++) dp[i] = -1;
        cout<<CountWays(n,dp)<<endl;
        delete []dp;
    }

    return 0;
}