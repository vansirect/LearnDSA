#include <iostream>
using namespace std;
 //outer loop number of lines
// inner loop focus on colums and connect to rows
// print inside the inner loop
// observe symmetry
void pattern1() {
	/*
	****
	****
	****
	****
*/
	for (int i = 0;i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "*";
			// prints **** , when it reaches for its goes to the outer loop and goes to the next line with the outer loop
		}
		cout << endl;
	}
}
void pattern2() {
	/*
	*
	**
	***
	****
*/
	for (int a = 0;a < 5; a++) {
		for (int b = 0; b < a; b++) {
			cout << "*";

			/*When a = 0 b runs from 0 to 0 , from a = 1 b runs from 0 to 1(outputing 1 star) , from a = 2 b runs from 0 to 2 outputing 2 stars
			*
			*/
			
		}
		cout << endl;
	};
}
void pattern3() {
	/*
	1
	22
	333
	4444
*/
	for (int c = 0;c < 6; c++) {
		for (int d = 1; d < c; d++) {
			cout << d ;

			

		}
		cout << endl;
	};
}
void pattern4() {
	/*
	1
	22
	333
	4444
*/
	for (int e = 0;e < 5; e++) {
		for (int f = 0; f < e; f++) {
			cout << e;

			
		}
		cout << endl;
	};
}
void pattern5() {
	/*
	****
	***
	**
	* 
*/
	for (int g = 0;g < 5; g++) {
		for (int h = 5; h > g; h--) {
			cout <<"*";
		}
		cout << endl;
	};
}
void pattern6() {
	/*
	4321
	321
	21
	1
*/
	for (int k = 0;k < 5; k++) {
		for (int l = 0; l < k;l++) {
			cout <<l;
		}
		cout << endl;
	};
}



int main() {
	pattern1();
	pattern2();
	pattern3();
	pattern4();

	pattern5();
	pattern6();

	
	return 0;
}