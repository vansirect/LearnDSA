#include <iostream>
#include <vector>
#include<set>
using namespace std;

vector<int> arr = { 1, 2, 3, 4, 5, 6 };
vector<int> arr1 = { 1, 2, 2, 3, 4, 5, 6,9,10,11 };

void rotateLeft() {
    // so what we are  trying to do is basically we are given an array 1 2 3 4 5 6 we want to make it 2 3 4 5 6 1
    int temp = arr[0];
    // here we are storing the  first element in a variable
    for (int i = 0; i < arr.size() - 1; i++) {
        arr[i] = arr[i + 1]; // here we are shifting the values to the left
        /*
        This moves each by 1 to the left
        223456
        233456
        234456
        234556
        234566




        */
    }
    arr[arr.size() - 1] = temp; // Place the first element at the end so basically arr[5] = 1

}
void Reversearr(vector<int>&arr, int start, int end)
{ 
    // lets take 1234 we just want to make it 4321
    while (start <= end)
        //here basically have to ensure  1 had to be less than 4 or 2 less than 3 otherwise it  would be reversed
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // here its basic swapping  the 4 is now at the begginign the 1 is now at the end
        start++;
        end--;
        // here you now make the start 2 and the end 3
    }
}


void RotateByLeftKPlaces()
// here lets take 1234 if k is 2 the array becomes 3421
{
    int k = 2;  // Number of positions to rotate
    int n = arr.size();  // Get the size of the array directly using arr.size()

    // Reverse first k elements so [2, 1, 3, 4, 5, 6, 7]

    Reversearr(arr, 0, k - 1);

    // Reverse the last n-k elements so [2, 1, 7, 6, 5, 4, 3]

    Reversearr(arr, k, n - 1);

    // Reverse the entire array so [3, 4, 5, 6, 7, 1, 2]

    Reversearr(arr, 0, n - 1);
}
void MoveZerotoend() {
    int n = -1;  // This will be used as a pointer to the first zero

    // This is to search for the first zero
    for (int m = 0; m < arr.size(); m++) {  
        if (arr[m] == 0) {  
            n = m;  // If zero is found, n is set to this index
            break;   // Exit the loop once the first zero is found
        }
    }

    // If there are no zeros, do nothing
    if (n == -1) return; 



   //this is to swap the zeros
    for (int m = n + 1; m < arr.size(); m++) {  // Start from the next position after the first zero found
        if (arr[m] != 0) {  // If the current element is non-zero
            swap(arr[m], arr[n]);  // Swap the non-zero element with the first zero found
            n++;  // After swapping, move the zero pointer forward to the next position
        }
    }
}
void linearSearch() {

    // just trying to find the index of a given number in an array
    int searchnum = 5;
    for (int d = 0; d < arr.size();d++) {
        if (arr[d] == searchnum) {
            cout << d << endl;
        }
    }
}
void unionoftwoarrays() {
    //so what we are doing is lets say we are given an array 1 ,3,3 ,5 and 1 , 2 ,3 ,6 we want to output 1,2,3,5,6

    int size1 = arr.size();
    int size2 = arr1.size();
    set<int> st;

    // we are using a set because its ordered and unique meaning no repeating values
    for (int i = 0; i < size1; i++) {
        st.insert(arr[i]);
        // here we are doing is inserting the values of the array into the set
    }
    for (int i = 0; i < size2; i++) {
        st.insert(arr1[i]);
        //also inserting here
    }
    vector<int> temp;
    for (auto it : st) {
        temp.push_back(it);
        // here we are inpputing the values of the set into the vector
    }
   

}


