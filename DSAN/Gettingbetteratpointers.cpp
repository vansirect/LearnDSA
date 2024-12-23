#include <iostream>
using namespace std;
// a pointer is basically a variable the holds the memory address

void basics() {
	int n = 5;
	cout << &n << endl;// outputs the address of n 
	int* ptr = &n; //pointer  to the address of n
	cout << ptr << endl;// outputs the address of n
	cout << *ptr << endl;// outputs the value of n , * is used to dereference
	*ptr = 10;// the value stored in the address of n is now ten
	cout << n << endl;
}
void printnum(int* num) {
	cout << *num << endl;
}
void swap(float* p1, float* p2) {
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}
void print(void* ptr, char type) {
	// void ptr has no data type
	switch (type) {
	case 'i': 
		cout << *((int*)ptr) << endl;// you cast from a void to a data type usinh (type*)pointer and then *((type*)pointer) to dereference
		break;
	case 'c': 
		cout << *((char*)ptr) << endl;
		break;
	default:
		cout << "Invalid type" << endl;
	}
}
int functionptr() {
	return 5;
}
void arrays1() {
	int arr[5] = { 1,2,3,4,5};
	cout << arr << endl;// outputs the address of the first element in the array
	cout << &arr[0] << endl;// also outputs the address of the the first element in the array
	cout << arr[3] << endl;// outputs the 4th element
	cout << *(arr + 3) << endl;// outputs the 4th element
	for (int i = 0; i < 5;i++) {
		cout << *(arr + 1) << endl;// its the same ass saying arr + 2 as before
	}




}
int add(int a, int b) {
	return a + b;
}
class learn {
private:
	int a;
public:
	int b;
	void init(int a) {
		this->a = a;// this is to access the same value in an instance we wouldnt need it if int a was something else but they have the same name

	}
	void display() {
		cout << "A:" << a <<this->a<< endl;
	// pointername-> variable name = value;
	
};

class Student {
private:
	// Declared private members
	int total_marks;
	float total_percentage;

public:
	// Method to calculate the percentage of marks
	void percentage(int total_marks)
	{
		this->total_marks = total_marks;
		total_percentage = (total_marks * 100) / 500;
	}
	// Method to print total percentage 
	void print()
	{
		cout << "Total percentage of the Student: " << endl;
		cout << total_percentage << "%";
	}

};
void modifyStr(string& str) {
	// this passes by reference not value
	str += " World!";
	// just add world to the end of any string 
}


	

int main() {
	string greeting = "Hello";
	modifyStr(greeting);
	cout << greeting;
	Student* s = new Student();

	// accessing member functions of the class
	s->percentage(387);// this is the same as saying s.percentage 
	s->print();


	
	basics();
	int num = 12;
	printnum(&num);// pointer always needs and an address thats why we use ampersand
	print(&num,'i'); // so takes the address and character type and outputs
	int(*ptrfunc)() = functionptr;
	cout << ptrfunc() << endl;// so we have called the function using the function pointer
	int(*addptr)(int, int) = add;// this is for when youre taking in values in the function
	cout << addptr(3, 9) << endl;;
	float a = 10;
	float b = 7;
	printf(" a = %.2f, b = %.2f\n", a, b);
	swap(&a, &b); // Pass the addresses of a and b to the function
	printf(" a = %.2f, b = %.2f\n", a, b);
	
	return 0;
	
}