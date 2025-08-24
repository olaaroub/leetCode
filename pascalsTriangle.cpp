#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        if(numRows<= 0) return result;
        for(int row = 0; row< numRows;row++)
        {
			vector<int> arr;
            for(int i = 0;i <= row; i++){
                if(row == i || i == 0)
                    arr.push_back(1);
                else
                    arr.push_back(result[row - 1][i - 1] + result[row - 1][i]);
            }
            result.push_back(arr);
        }
        return result;
    }
};


int main(){
	Solution obj;
	try
	{
        vector<vector<int>> triangle = obj.generate(5);
        for(const auto& row : triangle) {
            for(const auto& num : row) {
                cout << num << " ";
            }
            cout << endl;
        }
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}