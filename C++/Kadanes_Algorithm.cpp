// Kadane's Algorithm is used to find the Maximum subarray sum in O(N) time where N is the size of the array.
#include <iostream>
using namespace std;
int Kadane(int arr[], int n)
{
    int currentSum = 0;
    int largestSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        largestSum = largestSum < currentSum ? currentSum : largestSum;
        currentSum = currentSum < 0 ? 0 : currentSum;
    }
    return largestSum;
}
int main()
{
    int n;
    int arr[1000000];
    cout << "Enter the Size of the array:";
    cin >> n;
    cout << "\nEnter the Elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The maximum subarray sum is:" << Kadane(arr, n);
    return 0;
}