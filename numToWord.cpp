#include <iostream>
#include <string>
using namespace std;

string print_digit(int digit)
{
    if (digit == 1) return "one";
    if (digit == 2) return "two";
    if (digit == 3) return "three";
    if (digit == 4) return "four";
    if (digit == 5) return "five";
    if (digit == 6) return "six";
    if (digit == 7) return "seven";
    if (digit == 8) return "eight";
    if (digit == 9) return "nine";
    return "";
}


string print_teens(int number)
{
    if (number == 10) return "ten";
    if (number == 11) return "eleven";
    if (number == 12) return "twelve";
    if (number == 13) return "thirteen";
    if (number == 14) return "fourteen";
    if (number == 15) return "fifteen";
    if (number == 16) return "sixteen";
    if (number == 17) return "seventeen";
    if (number == 18) return "eighteen";
    if (number == 19) return "nineteen";
    return "";
}


string print_tens(int number)
{
    if (number >= 90) return "ninety";
    if (number >= 80) return "eighty";
    if (number >= 70) return "seventy";
    if (number >= 60) return "sixty";
    if (number >= 50) return "fifty";
    if (number >= 40) return "fourty";
    if (number >= 30) return "thirty";
    if (number >= 20) return "twenty";
    return "";
}

int main()
{
    int number;
    cin >> number; cin.ignore();

    if(number >= 20)
    {
        cout << print_tens(number) <<"-";
        cout << print_digit(number%10)<<endl;
    }
	else if(number < 20 && number >=10)
		cout << print_teens(number) << endl;
    else
        cout << print_digit(number) << endl;
}