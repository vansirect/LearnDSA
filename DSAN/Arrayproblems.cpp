#include <iostream>
#include <vector>
#include<set>
using namespace std;
int arr1[7] = { 2 ,3 ,9 ,5 ,3, 6 ,3 };
void largestnum() {
	
	/*
	What this does is assumes lets say 2 the largest value to start  , and then it check with 3 to see if its largest,
	if 3 is largest then 3 is then stored as the largest variable
	

	Theres also another way thats possible using sorting , if you sort the array you get 2333569 then since the largest
	will always be at the last place then you print arr[6]
	
	*/
	int largest = arr1[0];
	for (int i = 1; i < 7; i++) {
		if (arr1[i] > largest) {
			largest = arr1[i];
		}
	}
	cout << largest << endl;



}
void checksorted() {
	for (int k = 1; k < 7; k++) {
		if (arr1[k] >= arr1[k - 1]) {
			// what this basically does is check if the previous value in the array is smaller than the one after
			// eg 1432 it will check if 4 is greater than one which will be okay then check if 3 is greater than 4 which its not
			continue;

		}
		else
		{
			cout << "False" << endl;

		}
		cout << "True" << endl;
	}

}
void seclargestnum() {
	int largest1 = arr1[0];
	int seclarge = -1;
	for (int j = 0; j < 7; j++) {
		if (arr1[j] > largest1) {
			// if arr j is now the largest , the old largest just become the second largest thats why we are swapping
			seclarge = largest1;
			largest1 = arr1[j];
		}
		else if(arr1[j] < largest1 && arr1[j]>seclarge)
			// if its not the largest but its still bigger than the second largest its becomes the new largest this is for dupes
		{
			seclarge = arr1[j];
		}
	}
	cout << seclarge << endl;
}
void removedupe() {
	set<int>set;
	for (int l = 0; l < 7; l++) {
	// well we know in this case a set is unique and ordered so when we insert a duplicate into a set it wont accept it
		set.insert(arr1[l]);
	}
	for (int num : set) {
		cout << num << endl;
	}



}