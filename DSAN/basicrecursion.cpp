#include <iostream>
using namespace std;

void recurse1(int n) {
	
	if (n == 5) {
		return;
	}
	cout << n << endl;
	
	recurse1(n+1);

}

void recurse2(int m) {
	
	if (m > 1) {
		return;
	}
	cout << m << endl;
	
	recurse2(m-1);

}
void backtrack(int l) {

	if (l < 1) {
		return;
	}
	/* output is 1 2 3 4 etc
	
	*/

	backtrack(l - 1);
	cout << l << endl;

}




