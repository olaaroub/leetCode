
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.empty())
			return 0;
        vector<int>::iterator it;
		int idx(0);
		for(it=nums.begin(); it!= nums.end() && *it <= target ; it++)
		{
			if(*it == target)
				return idx;
			idx++;
		}
		return idx;
    }
};

int main()
{
	Solution obj;
	vector<int> nums = {1,3,5,6};
	int target = 7;
	std::cout << obj.searchInsert(nums, target) << endl;
}