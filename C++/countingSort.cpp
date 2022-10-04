#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	int n;
	cin >> n;

	int a[n], largest = -1;
	for(int i=0; i<n; i++){
		cin >> a[i];
		largest = max(largest, a[i]);
	}

	vector<int> freq(largest+1, 0);

	for(int i=0; i<n; i++){
		freq[a[i]]++;
	}

	int j=0; 
	for(int i=0; i<=largest; i++){
		while(freq[i] > 0){
			a[j] = i;
			freq[i]--;
			j++;
		}
	}

	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	return 0;
}