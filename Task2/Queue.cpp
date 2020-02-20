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
	return temp;
}

void Queue::fill(string s) {
	for (int i = 0; i < s.length()/2; i++) {
		if (isalpha(s[i])) {
			enQ(tolower(s[i]));
		}
	}
}