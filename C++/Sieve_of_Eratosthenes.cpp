//   Sieve of Eratosthenes Algorithm..

//   Sieve of Eratosthenes is a simple and ancient algorithm used to find the prime numbers up to any given limit.
 
//   Time Complexity = O(n*log(log n)) 
//   Space Compexity = O(n)

/*
    Initialize..
     limit = n

    a. Create a dummy array of size n 
    b.fill each value of dummy array as FALSE

   c. traverse for i =2 to i<=n 
    if(dummyarr[i]== FALSE){
        travers j = i*i to j<=n
            dummyarr[j] = TRUE;
        
    }

   d. traverse dummyarr i =2 to i<=n  and print
    for dummyarr[i] == FALSE;
*/


 
 #include <iostream>
 #include<vector>
  using namespace std;

 void primesieve(int n){
     int prime[n]={0};
     for(int i=2; i<=n; i++)
     {
         if(prime[i]==0){
             for(int j=i*i; j<=n; j+=i){
                 prime[j]=1;
             }
         }
     }

     for(int i=2;i<=n; i++){
         if(prime[i]==0){
             cout<<i<<" ";
         }
     }
     cout<<endl;
 }
int main()
{
    int n;
    cin>>n;
    primesieve(n);
    return 0;
}
