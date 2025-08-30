#include <iostream>
#include <cstring>
#include <string>
#include <limits>

using namespace std;

class Solution {
public:
    int reverse(int x) {
		if(long xx=x ; xx > __INT_MAX__ ||  xx < -__INT_MAX__) return 0;
		if(x>=0 && x <10) return x;
        string res;
		if(x < 0){
			res += '-';
			x*=-1;
		}
        while(x){
            res += to_string((x%10));
            x /= 10;
        }
		long ress = stol(res);
        return ress;
    }
};


int main()
{
	Solution obj;
	try
	{
		/* code */
		cout << obj.reverse(1534236469) <<endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}