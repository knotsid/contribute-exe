// WAP to find a factorial of a number by using recursive function


#include <iostream>

using namespace std;
int fact(int num);

int main() {
	
	
	cout<<"Enter Number"<<endl;
	int n;
	cin>>n;
	
	
	cout<<"The fact is " << fact(n);
	
	return 0;
}

int fact(int num) {
	if(num==1){
		return 1;
	}
	
	else{
		return num*fact(num-1);
	}
}