#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> ds,unordered_map<int,int> & map,vector<int>&nums,vector<vector<int>>&ans,int size,int max)
{
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
	if(size>=max)
	{
		ans.push_back(ds);
		return;
	}
	
	for(int i=0;i<nums.size();i++)
	{
		if(map[nums[i]]==1)
		{
			
		
		ds.push_back(nums[i]);
		
		map[nums[i]]--;	
		solve(ds,map,nums,ans,size+1,max);
		map[nums[i]]++;
		ds.pop_back();
		
		}
		
		
	}
	
	
}
vector<vector<int>> permute(vector<int>& nums) {
	
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	vector<vector<int>> ans;
	int len = nums.size();
	
	
	unordered_map<int,int> s;
	
	for(int i=0;i<len;i++)
	{
		s[nums[i]]++;
	}
	
	int size = 0;
	vector<int> ds;
	solve(ds,s,nums,ans,size,len);
	
	return ans;

}
int main()
{
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
	vector<int> v ={1,2,3,4};
	
	
	vector<vector<int>>ans = permute(v);
	
	int count = 0;
	
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			
			cout<<ans[i][j]<<" ";
		}
		count++;
		cout<<endl;
	}
	
	cout<<endl<<count<<" permuations "<<endl;
	
}