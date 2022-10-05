#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int lis(vector < int > & nums) {
  vector < int > sub;
  for (int x: nums) {
    if (sub.empty() || sub[sub.size() - 1] < x) {
      sub.push_back(x);  
    } else {
      auto it = lower_bound(sub.begin(), sub.end(), x);       
      * it = x;
    }
  }
  return sub.size();
}
int main() {
	// Your code goes here;
	vector<int> arr = {10, 22, 9, 33, 21, 50, 41, 60, 80};
	cout << lis(arr);
	return 0;
}
