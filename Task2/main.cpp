#include "Stack.h"
#include "Queue.h"
#include <iostream>
#include <chrono>

using namespace std;

int main() {
	Stack stack;
	Queue queue;
	Stack stack2;
	Queue queue2;
	string pal = "Dennis, Nell, Edna, Leon, Nedra, Anita, Rolf, Nora, Alice, Carol, Leo, Jane, Reed, Dena, Dale, Basil, Rae, Penny, Lana, Dave, Denny, Lena, Ida, Bernadette, Ben, Ray, Lila, Nina, Jo, Ira, Mara, Sara, Mario, Jan, Ina, Lily, Arne, Bette, Dan, Reba, Diane, Lynn, Ed, Eva, Dana, Lynne, Pearl, Isabel, Ada, Ned, Dee, Rena, Joel, Lora, Cecil, Aaron, Flora, Tina, Arden, Noel, and Ellen sinned.";
	string noPal = "abcdefghijklmnopqrst uvwxyzabcdefghijklmnopqrst uvwxyzabcdefghiJklm nopqrstuvwxyzabcd efghijklMnopqrstuvwxy zabcdefGhijklmnopqr!stuvwxyz abcdefghijklmnop qrstuvwxyz?abcdefghijklmnopqrstuvwxyzabcdef ghijklmnopqrstuvwxyza bcdefghijklmnopq rstuvwxyz.";
	queue.fill(pal);
	stack.fill(pal);
	queue2.fill(noPal);
	stack2.fill(noPal);

	auto start3 = chrono::steady_clock::now();
	cout << stack.isPalindrome(pal) << endl; //This part is using only stack
	auto end3 = chrono::steady_clock::now();
	cout << chrono::duration_cast<chrono::microseconds>(end3 - start3).count() << " microseconds." << endl;
	auto start4 = chrono::steady_clock::now();
	cout << stack.isPalindrome(noPal) << endl;
	auto end4 = chrono::steady_clock::now();
	cout << chrono::duration_cast<chrono::microseconds>(end4 - start4).count() << " microseconds." << endl;

	auto start = chrono::steady_clock::now();

	bool isPal = true;
	while (queue.getSize() != 0 && !isPal) { // adding && !isPal will reduce time by a lot!
		char a = queue.deQ();
		char b = stack.pop();
		//cout << a << endl;
		//cout << b << endl;
		if (a != b) { // comparing the the first element of queue with the last element of stack
			isPal = false; // if elements are not identical one time we know it's not a palindrome
		}
	}
	cout << endl;
	cout << ((isPal) ? "true" : "false") << endl;
	auto end = chrono::steady_clock::now();
	cout << chrono::duration_cast<chrono::microseconds>(end - start).count() << " microseconds." << endl;
	auto start2 = chrono::steady_clock::now();

	isPal = true;
	while (queue2.getSize() != 0) { // adding && !isPal will reduce time by a lot!
		if (queue2.deQ() != stack2.pop()) { // comparing the the first element of queue with the last element of stack
			isPal = false;
		}
	}

	cout << ((isPal) ? "true" : "false") << endl;


	auto end2 = chrono::steady_clock::now();
	cout << chrono::duration_cast<chrono::microseconds>(end2 - start2).count() << " microseconds." << endl;

	return 0;
}