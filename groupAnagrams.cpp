#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
		int size(t.length());
		for(int i = 0;i<size;i++)
		{
			for(int j=0;j<s.length();j++)
				if(t[i]==s[j]){
					s.erase(j--,1);
                    break;
                }
		}
		return(s.empty());
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        int i(0),size(strs.size());
		vector<vector<string>> result;
		while(i < size){
			
		}
    }
};