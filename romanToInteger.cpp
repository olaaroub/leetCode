#include <iostream>
#include <map>

using namespace std;

class Solution{
	private:
		map<char, int> romanValues = {
			{'I', 1},
			{'V', 5},
			{'X', 10},
			{'L', 50},
			{'C', 100},
			{'D', 500},
			{'M', 1000}
		};
	public:
	int romanToInt(string str){

		if (str.empty()) return 0;
		int res_final = 0;
		int i = str.length() - 2;
		int tmp_val   = romanValues[str[i + 1]];

		while(i >= 0)
		{
			int	val     = romanValues[str[i]];
			int	pre_val = romanValues[str[i + 1]];
			if (val == pre_val) tmp_val += val;
			else if (val < pre_val) tmp_val -= val;
			else
			{
				res_final += tmp_val;
				tmp_val    = val;
			}
			i--;
		}
		return res_final + tmp_val;
	}
};



int main()
{
	Solution obj;

	try
	{
		std::cout << obj.romanToInt("MCMXCIV") << endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}