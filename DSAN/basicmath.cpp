#include<iostream>
using namespace std;
void countdigit (){
	int n = 9203;
	int lastdig;
	int counter = 0;
	while (n > 0) {
		lastdig = n % 10;
		/*
		lets take 9203 when you divided 9203 by 10 you get 
		3 as the remainder which is the last digit*/
		counter++;
		// increase the counter by 1 when  you divide it
		n = n / 10;
		/* lets take the integer n to be 22
		if you divide 22 by 10 its 2.2 but since its an integer on 2 is recorded
		and when you divide 2 by 10 it becomes 0.2 and since its an integer only 0 is recorded and then the loop closes*/


	}
	cout << counter<<endl;

}
void reverseanumber() {
	int m = 4345;
	int lastdig1;
	int revnum = 0 ;
	
	while (m > 0) {
		lastdig1 = m % 10;
		//same thing
		revnum = (revnum * 10) + lastdig1;
		/* lets use 4345 since rev num begins at 0 , if you multiply it by 
		* 10 you get 0 and then add the last digit giving you 5 , this happens 
		* till you get the full reversed number
		*/
		m = m / 10;
		


	}
	cout << revnum << endl;
}
void palindromeornah() {

	int l = 4345;
	int lastdig2;
	int revnum = 0;
	int unchange = l;
	while (l > 0) {
		lastdig2 = l % 10;
		//same thing
		revnum = (revnum * 10) + lastdig2;
		/* lets use 4345 since rev num begins at 0 , if you multiply it by
		* 10 you get 0 and then add the last digit giving you 5 , this happens
		* till you get the full reversed number
		*/
		l = l / 10;



	}
	if (revnum == unchange) {
		cout << "True" << endl;

	}
	else {
		cout << "False" << endl;
	}
}
void divisors() {
	int o = 2345;
	for (int i = 0; i < o;i++) {
		if (o % i == 0) {
			cout << i << endl;
		}
	}
}

