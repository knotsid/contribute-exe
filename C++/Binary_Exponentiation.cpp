#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
int main()
{
    ll t=1;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll ans=1;
        while(b){
            if(b%2==0){
                a*=a;
                b/=2;
            }
            else{
                ans*=a;
                b--;
            }
        }
        cout<<"The value of a^b is "<<ans<<endl;
    }
    return 0;
}