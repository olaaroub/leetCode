/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getNoZeroIntegers.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:51:56 by olaaroub          #+#    #+#             */
/*   Updated: 2025/09/08 10:56:11 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
		vector<int> res;

		for(int a=0;a<=n;a++)
		{
			int b = n-a;
			if(to_string(a).find('0')==string::npos && to_string(b).find('0')==string::npos)
			{
				res.push_back(a);
				res.push_back(b);
				return res;
			}

		}
		return res;
    }
};

int main(){

	Solution s;
	vector<int> v = s.getNoZeroIntegers(11);
	for (size_t i = 0; i < v.size(); i++)
		cout << v[i] << endl;
	return 0;
}