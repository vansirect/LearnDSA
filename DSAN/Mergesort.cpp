#include<iostream>
#include <vector>
using namespace std;




/*
How merge sort works is you divide an array into  individual elements and put it back together
eg 4 9 6 8  2 
split into  49 and  682 then  49-  4 and 9 , 682 - then 68 and 2  and  68 - 6 and 8
merge 4 and 9 back to  49 since its in order , same with 68 
you then merge 68 and 2 to make 268  to make it in order
then merge 268 and 49
to make 24689



*/



vector<int> arr = { 9, 4, 7, 6, 3, 1, 5 };

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);  // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);  // merging sorted halves
}

