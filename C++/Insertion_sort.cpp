#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int ele = arr[i];
        int j = i;

        while (arr[j - 1] > ele && j >= 1)
        {
            arr[j] = arr[j - 1];
            j--;
        }

        arr[j] = ele;
    }
}

int main()
{
    int n;
    cout<<"Enter size of array to be sorted : ";
    cin >> n;
    int arr[n];
    cout<<"Enter "<<n<<" Elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    insertion_sort(arr, n);
    cout<<"Sorted Array is : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}