#include <iostream>
#include <chrono>
#include "StudentDB.h"
#include "LinkedList.h"

using namespace std;

int main() {

	StudentDB db;
	LinkedList LL;
	Student harry("harry");
	Course c("abc", 10, "def");
	Course d("zzz", 15, "xxx");

	harry.addCourse(c);
	harry.addCourse(d);
	harry.getCourse("zzz");

	db.addStudent(harry);
	db.addStudent(Student("magnus"));

	auto start = chrono::steady_clock::now();
	//do stuff here
	for (int i = 0; i < 1000; i++) {
		db.addStudent(Student("student" + to_string(i)));
		db.getStudent(i).addCourse(Course("abc", 10, "def"));
		db.getStudent(i).addCourse(d);
	}

	auto end = chrono::steady_clock::now();

	cout << chrono::duration_cast<chrono::microseconds>(end - start).count() << " microseconds." << endl;

	auto start = chrono::steady_clock::now();
	//do stuff here
	for (int i = 0; i < 1000; i++) {
		Student temp("student" + to_string(i));
		LL.addStudent(&temp);
		Course temp2("abc", 10, "def");
		LL.getStudent(i).addCourse(Course("abc", 10, "def"));
		db.getStudent(i).addCourse(d);
	}

	auto end = chrono::steady_clock::now();

	cout << chrono::duration_cast<chrono::microseconds>(end - start).count() << " microseconds." << endl;

	return 0;
}