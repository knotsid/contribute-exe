//   Sieve of Eratosthenes Algorithm..

//   Sieve of Eratosthenes is a simple and ancient algorithm used to find the prime numbers up to any given limit.
 
//   Time Complexity = O(n*log(log n)) 
//   Space Compexity = O(n)

/*
    Initialize..
     limit = a-b

    a. Create a dummy array of size b-a 
    b.fill each value of dummy array as FALSE

   c. traverse for i =2 to i<=b 
    if(dummyarr[i]== FALSE){
        travers j = i*i to j<=n
            dummyarr[j] = TRUE;
        
    }

   d. traverse dummyarr i =2 to i<=n  and print
    for dummyarr[i] == FALSE;
*/

// Find Prime number in range a to b
 
#include <bits/stdc++.h>
using namespace std;

void sieve(int a, int b){
    vector<bool> arr(b,true);
    
    for(int i=2; i*i<=b; i++) //i*i=n is equal to i=sqrt(n)
    {
        for(int j=2*i; j<b; j+=i){
            if(arr[j]==true){
                arr[j]=false;
            }
        }
    }
    
    for(int i=2; i<b; i++){
        if(arr[i]==true)
        cout<<i<<endl;
    }
}

int main() {
    int a, b;
    cin>>a>>b;
    sieve(a,b);
    

    return 0;
}
