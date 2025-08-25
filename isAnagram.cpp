#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
     bool isAnagram(string s, string t) {
		if(s.length() != t.length()) return false;
		int size(t.length());
		for(int i = 0;i<size;i++)
		{
			for(int j=0;j<s.length();j++)
				if(t[i]==s[j])
					s.erase(j--,1);
		}
		return(s.empty());
    }
};

int main()
{
	Solution obj;

	cout << ((obj.isAnagram("ab", "a")) == true ? "true": "false") << endl;
}