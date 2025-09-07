
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
		vector<int> res;
		if(n % 2 == 0) {
			for(int i=1;i<=n/2;i++){
				res.push_back(i);
				res.push_back(-i);
			}
		}
		else
		{
			res.push_back(0);
			n -= 1;
			for(int i=1; i<=n/2; i++)
			{
				res.push_back(i);
				res.push_back(-i);
			}
		}
		return res;
    }
};
// case 5: add 0, 5 = 4: -1 1 -2 2
// case 9: 1 -1 2 -2 0 3 -3 4 -4

int main(){
	Solution sol;
	vector<int> result = sol.sumZero(8);
	for (int i : result) {
		cout << i << " ";
	}
	cout << endl;
}