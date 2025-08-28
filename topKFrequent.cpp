#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>


using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
		if(!k || nums.empty()) return {};
		unordered_map<int, int> reps;
		vector<int>::iterator it;
		for(it = nums.begin(); it!=nums.end();it++)
			reps[*it]++;

		vector<pair<int,int>> v(reps.begin(), reps.end());

		sort(v.begin(), v.end(), [](auto &a, auto &b) {
			return a.second > b.second;
		});
		// for(auto it = v.begin(); it!=v.end();it++){
		// 	cout << "(" << it->first << "," << it->second << "),";
		// }
		// exit(0);
		vector<int> answer;
		for(int i=0; i<k;i++)
			answer.push_back(v[i].first);

		return answer;
	}
};


int main(){
	Solution obj;
	vector<int> nums = {1,2,1,2,1,2,2,3,1,3,2};
	vector<int> res = obj.topKFrequent(nums, 2);
	cout <<"[";
	for(vector<int>::iterator it=res.begin();it!=res.end();it++){
		cout << *it << ",";
	}
	cout <<"]"<<endl;
	return 0;
}