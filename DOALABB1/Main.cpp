#include <iostream>
#include "StudentDB.h"

using namespace std;

int main() {
	StudentDB db;
	Student harry("harry");
	Course c("abc", 10, "def");
	Course d("zzz", 15, "xxx");

	harry.addCourse(c);
	harry.addCourse(d);
	harry.getCourse("zzz");

	db.addStudent(harry);
	db.addStudent(Student("magnus"));
	return 0;
}