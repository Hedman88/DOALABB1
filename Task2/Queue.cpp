#include "Queue.h"

int Queue::getSize() {
	return queue.size();
}

void Queue::enQ(char c) {
	queue.push_back(c);
}

char Queue::deQ() {
	char temp = queue[0];
	queue.erase(queue.begin());
	//cout << temp;
	return temp;
}

void Queue::fill(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (isalpha(s[i])) { // checks if the char is in the alphabet
			enQ(tolower(s[i])); // filling the queue with lower-case letters
		}
	}
}