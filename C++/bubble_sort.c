#include <stdio.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}

//2nd method - Taking input on runtime and calculating number of passes

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    int arr[n],i,j,pass;
    cout<<"Enter the elements"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Original Array : "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
           if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        pass++;
    }
    cout<<"New Array : "<<endl;
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"Number of pass "<<pass;
    return 0;
}

