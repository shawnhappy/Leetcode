#pragma once
#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

struct compa {
public:
	bool operator()(const string& first, const string& second)
	{
		return helper(first, second);
		//return true;
	}
private:
	bool helper(const string& first, const string& second)
	{
		int i = 0;
		while (first[i] != '\0' && second[i] != '\0' && first[i] == second[i])
			i++;
		
		if (first[i] == second[i])
			return false;
		
		if (first[i] == '\0')
			return helper(first, second.substr(i));

		if (second[i] == '\0')
			return helper(first.substr(i), second);

		if (first[i] > second[i])
			return true;
		else
			return false;
	}
};

class Solution {
public:
	string largestNumber(vector<int>& nums) {
		vector<string> snums(nums.size());
		string result = "";

		for (int i = 0; i<nums.size(); ++i)
			snums[i] = to_string(nums[i]);
		
		sort(snums.begin(), snums.end(), compa());
		
		for (int j = 0; j<snums.size(); ++j)
			result.append(snums[j]);

		return result;
	}
};