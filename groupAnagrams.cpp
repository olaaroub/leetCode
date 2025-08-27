#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public: // ["eat","tea","tan","ate","nat","bat"]
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.empty()) return {};
        int size(strs.size());
		vector<vector<string>> result;
		vector<string> sorted = strs;
		for(int i =0; i<size; i++)
			std::sort(sorted[i].begin(), sorted[i].end());
		vector<bool> grouped(size, false);
		for(int i=0;i<size;i++)
		{
			if(grouped[i]) continue;
			vector<string> tmp;
			tmp.push_back(strs[i]);
			grouped[i] = true;
			for(int j=i+1;j<size;j++){
				if(!grouped[j] && sorted[i] == sorted[j]){
					tmp.push_back(strs[j]);
					grouped[j] = true;
				}
			}
			result.push_back(tmp);
		}
		return result;
    }
};

int main()
{
	Solution sol;
	vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
	vector<vector<string>> result = sol.groupAnagrams(strs);

	// output should be like grouped like [["bat"],["nat","tan"],["ate","eat","tea"]]
	for (size_t i = 0; i < result.size(); i++)
	{
		cout << "[ ";
		for (size_t j = 0; j < result[i].size(); j++)
		{
			cout << result[i][j] << " ";
		}
		cout << "]" << endl;
	}
	return 0;
}