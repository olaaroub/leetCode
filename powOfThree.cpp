#include <iostream>
#include <cmath>

class Solution{
	public:
		bool isPowerOfThree(int32_t n){
			if(n <= 0) return false;
			while (n % 3 ==0)
				n /= 3;
			return (n ==1);
		}
};

int main()
{
	Solution obj;
	bool x;
	try
	{
		x = obj.isPowerOfThree(45);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << x << std::endl;

}