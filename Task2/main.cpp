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
	/*cout << "Is " << pal << " a palindrome?" << endl << stack.isPalindrome(pal) << endl;
	cout << "Is " << noPal << " a palindrome?" << endl << stack.isPalindrome(noPal) << endl;
*/
	auto start = chrono::steady_clock::now();

	bool isPal = true;
	while (queue.getSize() != 0) {
		if (queue.deQ() != stack.pop()) {
			isPal = false;
		}
	}

	cout << ((isPal) ? "true" : "false") << endl;
	auto end = chrono::steady_clock::now();
	cout << chrono::duration_cast<chrono::microseconds>(end - start).count() << " microseconds." << endl;
	auto start2 = chrono::steady_clock::now();

	isPal = true;
	while (queue2.getSize() != 0) {
		if (queue2.deQ() != stack2.pop()) {
			isPal = false;
		}
	}

	cout << ((isPal) ? "true" : "false") << endl;


	auto end2 = chrono::steady_clock::now();
	cout << chrono::duration_cast<chrono::microseconds>(end2 - start2).count() << " microseconds." << endl;

	return 0;
}