#include <iostream>
#include <vector>
#include <set>

using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
		if(nums.empty())
			return false;
		set<int> notdup;
		int numSize = nums.size();
		for(int i = 0; i < numSize; i++){
			notdup.insert(nums[i]).second == false;
				return false;
		}
		return true;
    }
};