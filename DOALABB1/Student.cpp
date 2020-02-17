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
	cout << "adding course" << endl;
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