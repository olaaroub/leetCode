#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
		if(!nums.size())
			return 0;
		vector<int>::iterator it;
		for(it = nums.begin(); it != nums.end();)
		{
			if(*it == val)
				it = nums.erase(it);
			else
				++it;
		}
		return nums.size();
    }
};

int main()
{
	Solution sol;
	vector<int> nums = {3, 2, 2, 3};
	int val = 2;
	int newSize = sol.removeElement(nums, val);
	for (int i = 0; i < newSize; i++) {
		cout << nums[i] << " ";
	}
	cout << endl;
	return 0;
}