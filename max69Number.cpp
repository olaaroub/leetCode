#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
    int maximum69Number (int num) {
        int res,i;
        string holder = std::to_string(num);
		i = holder.find_first_of('6');
		if(i!=std::string::npos)
			holder[i] = '9';
		res = std::strtol(holder.c_str(),nullptr, 10);
		return(res);
    }
};

int main()
{
	Solution obj;
	try
	{
		cout << obj.maximum69Number(9999) << endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}