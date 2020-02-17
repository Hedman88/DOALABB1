#pragma once
#include "Course.h"
#include "LinkedList.h"
#include <vector>

class Student
{
	string name;
	vector<Course> courses;
public:
	Student(string name);
	string getName();
	Course getCourse(string courseName);
	void addCourse(Course c);
	void removeCourse(string courseName);
};

