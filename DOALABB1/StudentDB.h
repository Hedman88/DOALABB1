#pragma once
#include "Student.h"
using namespace std;

class StudentDB
{
	vector<Student> database;
public:
	void addStudent(Student s);
	void removeStudent(string studentName);
	void removeStudent(int i);
	Student getStudent(int i);
};

