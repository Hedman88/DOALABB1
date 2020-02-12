#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string name) {
	this->name = name;
}
Course Student::getCourse(string courseName) {
	for (int i = 0; i < courses.size(); i++) {
		if (courseName == courses.at(i).getName()) {
			courses.at(i).getInfo();
			return courses.at(i);
		}
	}
	cout << "Course not found" << endl;
	return Course("0", 0, "0");
}
void Student::addCourse(Course c) {
	cout << "adding course" << endl;
	courses.push_back(c);
}/*
void Student::removeCourse(string courseName) {
	for (int i = 0; i < courses.size(); i++) {
		if (courseName == courses.at(i).getName()) {
			delete courses.at(i);
		}
	}
	cout << "Course not found" << endl;
	return;
}*/