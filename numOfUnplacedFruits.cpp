#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
		int i, j, res;

		int n = fruits.size();

		for(i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if(fruits[i] <= baskets[j] && (baskets[j]!= -1)){
					baskets[j] = -1;
					fruits[i] = -1;
					break;
				}
			}
		}
		return (n - count(fruits.begin(), fruits.end(), -1));
    }
};


int main()
{
	Solution obj;

	try
	{
		vector<int> fruits = {3, 6, 1};
		vector<int> baskets = {6, 4, 7};
		cout << obj.numOfUnplacedFruits(fruits, baskets) << endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}