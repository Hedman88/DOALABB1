#include "Course.h"
#include <iostream>
using namespace std;

Course::Course(string name, int credit, string grade) {
	this->name = name;
	this->credit = credit;
	this->grade = grade;
}

string Course::getName() {
	return name;
}
int Course::getCredit() {
	return credit;
}
string Course::getGrade() {
	return grade;
}
string Course::getInfo() {
	string a = getName();
	int b = getCredit();
	string b2 = to_string(b);
	string c = getGrade();

	string info = a + " " + b2 + " " + c;
	cout << info << endl;
	return info;
}
void Course::setNext(Course* c) {
	nextCourse = c;
}
Course* Course::getNext() {
	return nextCourse;
}