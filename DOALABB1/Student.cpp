#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string name) {
	this->name = name;
}
string Student::getName() {
	return name;
}
Course Student::getCourse(string courseName) {
	for (int i = 0; i < courses.size(); i++) {
		if (courseName == courses[i].getName()) {
			courses[i].getInfo();
			return courses.at(i);
		}
	}
	cout << "Course not found" << endl;
	return Course("0", 0, "0");
}
void Student::addCourse(Course c) {
	//cout << "adding course" << endl;
	courses.push_back(c);
}
void Student::removeCourse(string courseName) {
	for (int i = 0; i < courses.size(); i++) {
		if (courseName == courses[i].getName()) {
			courses.erase(i + courses.begin());
		}
	}
	cout << "Course not found" << endl;
	return;
}
void Student::addCourse(Course *c) {
	if (courseHead == nullptr) {
		courseHead = c;
	}
	else {
		Course* temp = courseHead;
		courseHead = c;
		c->setNext(temp);
	}
}
void Student::removeCourseLL(string courseName) {
	Course* temp = courseHead;
	Course* temp2 = nullptr;
	while (temp != nullptr) {
		if (name == temp->getName() && temp2 != nullptr) {
			temp2->setNext(temp->getNext());
			delete temp;
		}
		else {
			courseHead = courseHead->getNext();
			delete temp;
		}
		temp2 = temp;
		temp = temp->getNext();
	}
}
void Student::setNext(Student* s) {
	nextStudent = s;
}
Student* Student::getNext() {
	return nextStudent;
}