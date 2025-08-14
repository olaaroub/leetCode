#include <iostream>
// #include <string>
#include <cstring>
// #include <map>
// #include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;
class  Solution{
	unordered_map<char, int> _map = {
		{'0', 0},
		{'1', 1},
		{'2', 2},
		{'3', 3},
		{'4', 4},
		{'5', 5},
		{'6', 6},
		{'7', 7},
		{'8', 8},
		{'9', 9},
	};
	public:
	string largestGoodInteger(string num)
	{
		string toRet("");
		string res("");
		int i(0);

		while(num[i])
		{
			char var = num[i];
			for(int j = 0; j < 3; j++){
				if(num[j + i] && var == num[j + i]) toRet += var;
				else
				{
					toRet = "" ;
					break;
				}
			}
			if(!toRet.empty())
			{
				if(_map[res[0]] < _map[toRet[0]])
					res = toRet;
			}
            i++;
		}
		return res;

	}
};


int main()
{
	Solution obj;

	try
	{
		cout << obj.largestGoodInteger("74444") << endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}