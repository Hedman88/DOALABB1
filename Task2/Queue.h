#pragma once
#include <vector>
#include <cctype>
#include <iostream>
using namespace std;
class Queue
{
	vector<char> queue;
public:
	int getSize();
	void enQ(char c);
	char deQ();
	void fill(string s);
};

