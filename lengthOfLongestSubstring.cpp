#include <iostream>
#include <string>
#include <algorithm>
// #include <

using namespace std;


class Solution{
	public:
		int lengthOfLongestSubstring(string s)
		{
			int i(0);
			int maxLen(0);
			string curr("");
			while (s[i])
			{
				if(find(curr.begin(), curr.end(), s[i]) == curr.end())
					curr += s[i];
				else if (find(curr.begin(), curr.end(), s[i]) != curr.end() && s[i+1])
				{
					if(curr.length() > maxLen)
					maxLen = curr.length();
					curr += s[i];
					curr = curr.substr(curr.find(s[i++]) + 1);
				}
				if (!s[i+1])
					if(curr.length() > maxLen)
						maxLen = curr.length();
			}
			return maxLen;
		}
};

int main()
{
	Solution obj;
	try
	{
		cout << obj.lengthOfLongestSubstring("au") << endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << "error : " << e.what() << std::endl;
		return 1;
	}

}
