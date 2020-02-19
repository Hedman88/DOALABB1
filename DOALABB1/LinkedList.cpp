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
			temp = nullptr;
		}
		else if(name == temp->getName() && temp2 == nullptr){
			head = head->getNext();
			temp = nullptr;
		}
		temp2 = temp;
		if (temp != nullptr) {
			temp = temp->getNext();
		}
	}
}
Student* LinkedList::getStudent(int i) {
	Student* temp = head;
	for (int k = 0; k < i; k++) {
		temp = temp->getNext();
	}
	return temp;
}