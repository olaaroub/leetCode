#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
		if(dimensions.empty()) return 0;
		int  res(0),size(dimensions.size());
		long long longestDiagonal=0;
		for(int i(0);i<size;i++){
			long long length = dimensions[i][0];
			long long width = dimensions[i][1];
			long long tmpDiagonal = length*length + width*width;
			if(tmpDiagonal > longestDiagonal)
            {
                longestDiagonal = tmpDiagonal;
				res = length * width;
            }
			else if(tmpDiagonal == longestDiagonal)
				res = max(res, (int)(length*width));
		}
		return res;
    }
};


int main()
{
	Solution obj;
	vector<vector<int>> dimensions = {
		{4,7},{8,9},{5,3},{6,1},{2,9},{3,1},{2,2},{5,8},{5,1},{5,6},{8,9},
		{8,9},{3,7},{2,6},{5,1},{7,4},{1,1},{1,7},{6,9},{3,3},{4,6},{8,2},
		{7,9},{9,2},{1,2},{3,8},{4,1},{9,7},{6,9},{9,8},{7,7},{5,7},{5,4},
		{6,5},{1,8},{2,3},{7,1},{3,9},{5,7},{2,4},{5,6},{9,5},{8,8},{8,1},
		{6,8},{5,1},{7,4},{2,1},{2,7},{2,5},{7,6},{5,7},{4,3},{1,5},{8,9},
		{3,1},{2,5},{9,1},{6,6},{5,1},{6,1},{1,1},{8,6},{1,7},{6,3},{9,3},
		{1,4},{1,1},{7,9},{4,5},{2,8},{7,9},{7,3},{4,9},{2,8},{4,6},{9,1},
		{8,4},{2,4},{7,8},{3,5},{7,6},{8,6},{4,7},{25,0},{39,2},{16,3},{33,6}
	};
	cout << obj.areaOfMaxDiagonal(dimensions) << endl;
}