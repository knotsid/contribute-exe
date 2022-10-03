
#include <iostream>
#include <climits>

using namespace std;


void selection_sort (int a[], int n)
{
    
    for (int i=0; i<n-1; i++) 
    {
        
        int min_index = i;  
        
        for (int j=i; j<n; j++)  
        {
            
            if (a[j] < a[min_index] ) 
            {
                
                min_index = j;   
                
            }
            
        }
        
        swap(a[i], a[min_index]);
        
    }
    
}



int main()
{
    int num, key;
    
    cout << "Enter the number of elements in array: ";
    cin >> num;   
    
    int a[1000];
    
    for (int i = 0; i < num; i++)
    {
        
        cin >> a[i];
        
    }
    
    selection_sort(a,num);
    
    for (int i =0; i<num; i++)
    {
        
        cout << a[i] << " , ";
        
    }
    
    
    
    
    
    return 0;
}
