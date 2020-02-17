#include "StudentDB.h"
#include <iostream>

void StudentDB::addStudent(Student s) {
	database.push_back(s);
}

void StudentDB::removeStudent(string studentName) {
	for (int i = 0; i < database.size(); i++) {
		if (studentName == database[i].getName()) {

			database.erase(i+database.begin());
		}
	}
	cout << "Course not found" << endl;
}