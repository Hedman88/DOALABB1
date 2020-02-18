#include "LinkedList.h"

void LinkedList::addStudent(Student* s) {
	if (head == nullptr) {
		head = s;
	}
	else {
		Student* temp = head;
		head = s;
		s->setNext(temp);
	}
}
void LinkedList::removeStudent(string name) {
	Student* temp = head;
	Student* temp2 = nullptr;
	while (temp != nullptr) {
		if (name == temp->getName() && temp2 != nullptr) {
			temp2->setNext(temp->getNext());
			delete temp;
		}
		else {
			head = head->getNext();
			delete temp;
		}
		temp2 = temp;
		temp = temp->getNext();
	}
}
Student* LinkedList::getStudent(int i) {
	for (int k = 0; k <= i; k++) {

	}
}