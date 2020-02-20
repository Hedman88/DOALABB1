#include "Stack.h"

void Stack::push(char* c) {
	stack.push_back(*c);
}

char Stack::pop() {
	char temp = stack.back();
	stack.pop_back();
	return temp;
}

void Stack::fill(string s) {
	for (int i = 0; i < s.length()/2; i++) {
		if (isalpha(s[i])) {
			s[i] = tolower(s[i]);
			push(&s[i]);
		}
	}
}

bool Stack::isPalindrome(string s) {
	int counter = 0;
	string temp;
	for (int i = 0; i < s.length(); i++) {
		if (isalpha(s[i])) {
			temp.append(to_string(tolower(s[i])));
			push(&s[i]);
			counter++;
		}
	}
	string temp2;
	for (int i = 0; i < counter; i++) {
		temp2.append(to_string(pop()));
	}
	cout << temp << endl << temp2 << endl;
	if (temp == temp2) {
		return true;
	}
	else {
		return false;
	}
}