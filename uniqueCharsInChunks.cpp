#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string s;
    getline(cin, s);
    int k;
    cin >> k; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    // int i = 0;
    string res;
    while(1)
    {
        string tmp = s.substr(0,3);
        cout << s<< endl;
        int i = 0;
        while(tmp[i])
        {
            if(!res.find(tmp[i]))
            res+=tmp[i];
    }
    cout<<res<<endl;
    if(s.empty())
        break;
    }

    // cout << "answer" << endl;
}