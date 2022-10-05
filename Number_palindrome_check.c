// C Program to Check whether a Program is Palindrome or Not. 
// Input the No. and you will get the output in 1 -> (Yes) or 0 -> (No) 

#include <stdio.h>

int palindrome(int n);
int main()
{
    int n ; 
    printf("enter no . : ");
    scanf("%d", &n);


    printf("%d" , palindrome(n));
    return 0;
}

int palindrome(int n)
{
    int rev = 0 ;
    for (int i = 0; n > 0 ; i++)
    {
        rev = rev * 10 + n % 10 ;
        n = n / 10 ;
    }
    return rev == n ;

    
}
