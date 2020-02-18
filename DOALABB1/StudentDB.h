#pragma once
#include "Student.h"
using namespace std;

class StudentDB
{
	vector<Student> database;
public:
	void addStudent(Student s);
	void removeStudent(string studentName);
	Student getStudent(int i);
};

