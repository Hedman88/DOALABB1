#pragma once
#include <string>

using namespace std;

class Course
{
	string name;
	int credit;
	string grade;
public:
	Course(string name, int credit, string grade);
	string getName();
	int getCredit();
	string getGrade();
	string getInfo();
};

