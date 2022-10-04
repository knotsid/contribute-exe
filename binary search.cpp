#include <iostream>
using namespace std;



int main(){
 int size;
 cout<<"Enter the size of array";
cin>>size;
int i,a;
string name[size], num;

cout<<"Enter number of element in array "<<endl;
cin>>a;

cout<< "Enter "<< a <<" Elemnt"<<endl;
for ( i = 0; i < a; i++)
{
    cin>> name[i];
}

cout<<"Enter a number to search "<<endl;
cin>>num;

for ( i = 0; i < a; i++)
{
    if (name[i] == num)
    {
        cout<<"Element Found at index "<< i;
        break;
    }

}

if(i==a){
        cout<<"Number is not present in Array ";
    }


return 0;
} 
