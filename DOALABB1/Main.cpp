#include <iostream>
#include <chrono>
#include <ctime>
#include "StudentDB.h"
#include "LinkedList.h"

using namespace std;

int main() {

	srand(time(NULL));

	StudentDB db;
	LinkedList LL;
	int students = 10000;
	cout << "Array-based: " << endl;
	for (int i = 0; i < 4; i++) {
		auto start = chrono::steady_clock::now();
		switch (i) {
		case(0): {
			for (int i = 0; i < students; i++) {
				db.addStudent(Student("student" + to_string(i)));
			}
			break;
		}
		case(1): {
			for (int i = 0; i < students; i++) {
				db.getStudent(i).addCourse(Course("abc", 10, "def"));
			}
			break;
		}
		case(2): {
			for (int i = 0; i < students/2; i++) {
				db.getStudent(i).removeCourse("abc");
			}
			break;
		}
		case(3): {
			for (int i = 0; i < students/2; i++) {
				//db.removeStudent(db.getStudent(rand()%(1000-i)).getName());
				db.removeStudent(rand() % (students - i));
			}
			break;
		}
		default: break;
		}
		auto end = chrono::steady_clock::now();
		cout << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " milliseconds." << endl;
	}


	cout << endl << "LL-based: " << endl;
	for (int i = 0; i < 4; i++) {
		auto start = chrono::steady_clock::now();
		switch (i) {
		case(0): {
			for (int i = 0; i < students; i++) {
				Student temp("student" + to_string(i));
				LL.addStudent(&temp);
			}
			break;
		}
		case(1): {
			for (int i = 0; i < students; i++) {
				Course temp2("abc", 10, "def");
				LL.getStudent(i)->addCourse(&Course("abc", 10, "def"));
			}
			break;
		}
		case(2): {
			for (int i = 0; i < students/2; i++) {
				LL.getStudent(i)->removeCourseLL("abc");
			}
			break;
		}
		case(3): {
			for (int i = 0; i < students/2; i++) {
				LL.removeStudent(LL.getStudent(rand() % (students - i))->getName());
			}
			break;
		}
		default: break;
		}
		auto end = chrono::steady_clock::now();
		cout << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " milliseconds." << endl;
	}

	return 0;
}