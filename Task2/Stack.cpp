#include "Stack.h"

void Stack::push(char c) { //takes in a char pointer to put as the last element of vector stack
	stack.push_back(c);
}

char Stack::pop() { //removes last element of vector stack and returns it
	char temp = stack.back();
	stack.pop_back();
	//cout << temp;
	return temp;
}

void Stack::fill(string s) { // takes in a string to fill vector stack with half of it, only half is required because the stack and queue get half each
	for (int i = 0; i < s.length(); i++) {
		if (isalpha(s[i])) {
			push(tolower(s[i]));
		}
	}
}

bool Stack::isPalindrome(string s) { //the method using only stack which checks if input string is a palindrome
	int counter = 0;
	string temp;
	for (int i = 0; i < s.length(); i++) {
		if (isalpha(s[i])) {
			temp.append(to_string(tolower(s[i])));
			push(tolower(s[i]));
			counter++;
		}
	}
	string temp2;
	for (int i = 0; i < counter; i++) {
		temp2.append(to_string(pop()));
	}
	if (temp == temp2) {
		return true;
	}
	else {
		return false;
	}
}