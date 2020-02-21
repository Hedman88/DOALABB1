#pragma once
#include <vector>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;
class Stack
{
	vector<char> stack;
public:
	void push(char c);
	char pop();
	void fill(string s);
	bool isPalindrome(string s);
};

