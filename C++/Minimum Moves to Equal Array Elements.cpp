
#include <bits/stdc++.h>

int main()
{

	int mi = *min_element(nums.begin(), nums.end());
	int ans = 0;
	for (auto i : nums)
	{
		ans += (i - mi);
	}
	return ans;
}