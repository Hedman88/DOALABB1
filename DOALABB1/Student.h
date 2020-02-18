#pragma once
#include "Course.h"
#include <vector>

class Student
{
	string name;
	vector<Course> courses;
	Course* courseHead = nullptr;
	Student* nextStudent = nullptr;
public:
	Student(string name);
	string getName();
	Course getCourse(string courseName);
	void addCourse(Course c);
	void addCourse(Course *c);
	void removeCourse(string courseName);
	void removeCourseLL(string courseName);
	void setNext(Student* s);
	Student* getNext();
};

