#pragma once
#include <vector>
#include <cctype>
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

