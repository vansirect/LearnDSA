#include <iostream>
using namespace std;
/*
How quick sort works is using a pivot , lets take 32856
lets take 5 as the pivot the code will make sure the pivot has values smaller to the left and the ones bigger to the right
so you will get 32586
then you will do the same thing for 32 and 86 make 2 and 6 the pivot having 
this will get you 23 and 68 then merge this back with 5 giving you 23568
 
 we will use a temp variable to swap


*/
#include <stdio.h>
// swap function 
void swap(int* a, int* b) {
    int temp = *a; 
    *a = *b;      // Put the value of  address 'b' into  'a'
    *b = temp;    // Put the temporary value into address 'b'
}

// This function helps to divide the array into two parts
int partition(int arr[], int low, int high) {

    int p = arr[low]; // pick the first element as the pivot
    int i = low;      // Start from the first element
    int j = high;     // Start from the last element

    while (i < j) { 

        // Move 'i' to the right until we find a number bigger than the pivot
        while (arr[i] <= p && i <= high - 1) {
            i++;
        }

        // Move 'j' to the left until we find a number smaller than the pivot
        while (arr[j] > p && j >= low + 1) {
            j--;
        }

        // If 'i' is still to the left of 'j', swap their values
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }

    // Swap the pivot with the element at 'j' so the pivot is in the right place
    swap(&arr[low], &arr[j]);
    return j; // Return the position of the pivot
}

// This function sorts the array using the QuickSort algorithm
void quickSort(int arr[], int low, int high) {
    if (low < high) { // Keep going if there's more than one element to sort

        // Get the pivot's position by dividing the array
        int pi = partition(arr, low, high);

        // Now sort the left side of the pivot
        quickSort(arr, low, pi - 1);

        // Then sort the right side of the pivot
        quickSort(arr, pi + 1, high);
    }
}

int main() {

    int arr[] = { 4, 2, 5, 3, 1 }; // Our array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements

    // Call QuickSort to sort the array
    quickSort(arr, 0, n - 1);

    // Print the sorted array
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0; // Say “We’re done!”
}
