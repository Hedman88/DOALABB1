#pragma once
#include "Student.h"
#include <string>
using namespace std;
class LinkedList
{
	Student* head = nullptr;
public:
	void addStudent(Student* s);
	void removeStudent(string name);
	Student* getStudent(int i);
};

