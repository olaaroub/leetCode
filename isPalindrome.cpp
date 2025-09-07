#include <iostream>
#include <algorithm>


using namespace std;

class Solution {
public:
	bool isPalindrome(string s) {
		// s.erase(remove_if(s.begin(), s.end(), [] (char c) {return !isalnum(c) ;}), s.end());
		// transform(s.begin(), s.end(), s.begin(), ::tolower);
		// string comp  = s;
		// // cout << comp << endl;
		// reverse(s.begin(), s.end());
		// // cout << s << endl;`
		// return( s == comp );

		string pal;
		for (auto &c : s) {
			if(isalnum(c))
				pal+= tolower(c);
		}
		int l(0),r(pal.length()-1);
		while(l<=r)
		{
			if(pal[l] != pal[r])
				return false;
			l++;
			r--;
		}
		return true;// hadi fach chft bli khasni n usi douple ponters;
	}
};


int main()
{
	Solution obj;

	cout << ((obj.isPalindrome("A man, a plan, a canal: Panama")) ? "true" : "false") << endl;
}