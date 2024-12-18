#include <iostream>
using namespace std;
// selection sort
/*
* what it does is find the minimum and swap it for the first
* 95328 then becomes 25389 , then finds the minimum again, 23895 etc gets the minimum put its at first and switches the 
* first for last
* 
*/

// Function to perform selection sort on an array
int myarr[5] = { 3,9,11,6,2 };
void  selectionsort( int myarr[]) {
	
	for (int i = 0; i < 4;i++) {
		// its not i<5 because when we reach the 5th time it will already be sorted
		// this outer loop is to control where the next small digit will be placed
		int min = i;// assumes that the minimum element it at i 

		
		for (int j = i + 1; j < 5;j++) {
			/*its from j = i + 1 because we are assuming we have moved the min
			* to i so we sort the remaining 4 
*/ 
			if (myarr[j] < myarr[min]) {
				// if the new value found from j is smaller than the previous min , the min is updated to j
				min = j;
			}
		}
		if (min != i) {
			/*
			if a smaller number was found , swap the smaller number with the current one*/
			int temp = myarr[min];
			// moves the smaller value to the left
			myarr[min] = myarr[i];
			// moves the larger value to the right
			myarr[i] = temp;

		}
	}
	 



}
//bubble sort
int bubble[5] = { 3,2,11,6,4 };
/*what is does is first sort them into adjacent pairs. 
* first switches 3 and 2, making 2,  3 , 11 . 6 , 4 then sorts through 11 and 3 which is fine
* it does 11 and 6 next switching them making  2 3 6 11 4
* it does 11 and 4 next switching them making  2 3 6 4 11 what you notice is 11 (the max) is not at the back
* it then does this again for 2 3 6 4  until it puts 6 at the back 
* making 2 3 4 6 11
* 
* 
*/
void bubblesort(int bubble[]) {
	for (int a = 0; a < 5; a++) {
		for (int b = 0; b < (5 - a - 1);b++) {
			if (bubble[b] > bubble[b + 1]) {
				int bubbletemp = bubble[b];
				bubble[b] = bubble[b + 1];
				bubble[b + 1] = bubbletemp;
			}

		}

	}

}

void insertionSort(int arr[]) {
	// its like bubble sort kind of but it does it in increments of the array not in pairs
	int key;  // The element to be inserted
	int k = 0;  // Index to traverse the sorted portion of the array

	// Outer loop starts from the second element (index 1) to the last element
	for (int l = 1; l < 5; l++) {
		key = arr[l];  // Store the current element as the key
		k = l - 1;  // Initialize j to the last index of the sorted portion

		// Inner loop: Shift elements of the sorted portion to the right 
		// if they are greater than the key
		while (k >= 0 && arr[k] > key) {
			arr[k + 1] = arr[k];  // Shift element to the right
			k = k - 1;  // Move to the next element on the left
		}

		// Insert the key at its correct position
		arr[k + 1] = key;
	}
}

