#include <iostream>
using namespace std;

//LEFT OCCURENCE
int leftoccur(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans =-1;

    while (s <= e)
    {

        if (a[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        
        }
        else if (a[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = (s + e) / 2;
    }
    return ans;
}


//RIGHT OCCURENCE

int rightoccur(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans =-1;

    while (s <= e)
    {

        if (a[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (a[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = (s + e) / 2;
    }
    return ans;
}
int main()
{

    int a[6] = {0,1,2,4,2,1};
    if (leftoccur(a, 6, 3) == -1){
        
        cout<<rightoccur(a, 6,3);


    }
    else{
    cout << leftoccur(a, 6, 3);
    }
    return 0;
}