#include <iostream>
#include <unordered_set>
#include <sstream>

class Solution {
public:
    int canBeTypedWords(std::string text, std::string brokenLetters) {
        std::stringstream ss(text);
        std::string holder;
        int res = 0;

        std::unordered_set<char> broken(brokenLetters.begin(), brokenLetters.end());

        while (ss >> holder) {
            bool hasBroken = false;
            for (char c : holder) {
                if (broken.count(c)) {
                    hasBroken = true;
                    break;
                }
            }
            if (!hasBroken) {
                res++;
            }
        }
        return res;
    }
};


