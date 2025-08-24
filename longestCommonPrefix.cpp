#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i(1),size(strs.size());
		string tmp;
		tmp = strs[0];
		int guard =0;
		while(i < size){
			int j = 0;
			if(tmp[0] != strs[i][0])
			{
				tmp.erase(0);
				return tmp;
			}
			while((j <= tmp.length()))
			{
				if(strs[i][j])
					guard = j;
				if(tmp[j] != '\0' && strs[i][guard] && tmp[j] != strs[i][guard])
					{tmp.erase(j, 1);
					 }
                else if((tmp[j] == strs[i][guard] && !strs[i][j]) ||
				 (tmp[j] == strs[i][guard] && tmp.find(strs[i][guard]) != j))
                {
                    tmp.erase(j, 1);
                    break;
                }

				else
					j++;
			}
			i++;
		}
		return tmp;
    }
};

int main()
{
	Solution obj;
	try
	{
		vector<string> input = {"abca","aba","aaab"};
		cout << obj.longestCommonPrefix(input);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
