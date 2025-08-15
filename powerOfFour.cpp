#include <iostream>
#include <cmath>

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0 ) return 0;

        while(n%4 == 0)
            n /= 4;

        return (n==1);
    }


};

int main()
{
	Solution obj;
	std::cout << obj.isPowerOfFour(2) << std::endl;
}