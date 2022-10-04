#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
int main()
{
    ll t=1;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll lo=0,hi=n-1;
        ll target;
        cout<<"Enter traget value whose upper bound is to be found."<<endl;
        cin>>target;
        while(hi-lo>1){
            if(arr[(lo+hi)/2]>target)
            hi=(lo+hi)/2;
            else
            lo=(lo+hi)/2+1;
        }
        if(arr[lo]>target)
        cout<<"Upper bound of target is "<<arr[lo]<<endl;
        else if(arr[hi]>target)
        cout<<"Upper bound of target is "<<arr[hi]<<endl;
        else
        cout<<"Search space does not have any value greater than target."<<endl;
    }
    return 0;
}
