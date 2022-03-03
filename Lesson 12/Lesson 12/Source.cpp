#include <iostream>
using namespace std;

//void main()
//{
	//// Pointers
	//int data = 10;

	//cout << &data << endl;
	//cout << (int)&data << endl;

	//int data = 100;
	//int* ptr = &data;

	//cout << ptr << endl;

	//float value = 200;
	//float* ptr = &value;

	//
	//cout << (int)ptr << endl;
	//cout << *ptr << endl;
	//*ptr = 0;
	//cout << *ptr << endl;

	// Task 1
	//int n1 = 0;
	//cout << "\nEnter number 1 : ";
	//cin >> n1;

	//int n2 = 0;
	//cout << "Enter number 2 : ";
	//cin >> n2;

	//int n3 = 0;
	//cout << "Enter number 3 : ";
	//cin >> n3;

	//int* ptr1 = &n1;
	//int* ptr2 = &n2;
	//int* ptr3 = &n3;

	//int sum = *ptr1 + *ptr2 + *ptr3;
	//cout << "\n Sum : " << sum << endl;

	// Task 2
	//int n1 = 0;
	//cout << "\nEnter number 1 : ";
	//cin >> n1;

	//int n2 = 0;
	//cout << "Enter number 2 : ";
	//cin >> n2;

	//int* ptr1 = &n1;
	//int* ptr2 = &n2;
	//if (*ptr1 > *ptr2)
	//	cout << ptr1 << " is greater." << endl;
	//else
	//	cout << ptr2 << " is greater." << endl;

	// Task 3
	//	int n1 = 0;
	//	cout << "\nEnter number 1 : ";
	//	cin >> n1;
	//
	//	int n2 = 0;
	//	cout << "Enter number 2 : ";
	//	cin >> n2;
	//
	//	int* ptr1 = &n1;
	//	int* ptr2 = &n2;
	//
	//	int temp = 0;
	//	int* tempPointer = &temp;
	//
	//	*tempPointer = *ptr1;
	//	*ptr1 = *ptr2;
	//	*ptr2 = *tempPointer;
	//
	//	cout << *ptr1;
	//	cout << "\n" << * ptr2;
																																							











//}
//
//#include <iostream>
//#define MAX_SIZE 100 // Maximum size of the string
//using namespace std;
//
//int main() {
//
//	char text1[MAX_SIZE], text2[MAX_SIZE];
//	char* str1 = text1;
//	char* str2 = text2;
//
//	// Inputting string from user
//	cout << "Enter any string: " << endl;
//	cin >> text1;
//
//	// Coping text1 to text2 character by character
//	while (*(str2++) = *(str1++));
//
//	cout << "First string: " << text1 << endl;;
//	cout << "Second string: " << text2 << endl;
//
//	return 0;
//}

//void main()
//{
//	char c = 'T', d = 'S';
//	char* p1 = &c;
//	char* p2 = &d;
//	char* p3;
//
//	p3 = &d;
//	cout << "*p3 = " << *p3 << endl;   // (1)
//
//	p3 = p1;
//	cout << "*p3 = " << *p3            // (2)
//		<< ", p3 = " << p3 << endl;   // (3)
//
//	*p1 = *p2;
//	cout << "*p1 = " << *p1            // (4)
//		<< ", p1 = " << p1 << endl;   // (5)
//
//
//
//}


//void main()
//{

	////int data = 0;
	////double *ptr = &data; // error

	////int a = NULL;
	////cout << a << endl;

	//////if (a == NULL)
	//////	cout << 

	////int data = 100;
	////int* ptr = &data;

	////ptr = NULL;

	////cout << ptr << endl;

	//const int size = 10;
	//int arr[size] = {1,2,3,4,5,6,7,8,9,10};
	//int* ptr = arr;

	///*cout << *ptr << endl;
	//cout << *(ptr + 1) << endl;
	//cout << *(ptr + 2)<< endl;*/

	// PRINTING ARRAY USING POINTER
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << *(ptr + i) << endl;
	//}


	//const int size = 10;
	//int arr[size] = {};
	//int* ptr = arr;

	//int min = 0;
	//int max = 10;
	//srand(time(0));
	//int random = 0;
	//for (int x = 0; x < size; x++)
	//{
	//	random = min + rand() % (max - min);
	//	*(ptr + x) = random;
	//}

	//int sum = 0;
	//for (size_t i = 0; i < size; i++)
	//{
	//	if (*(ptr + i) % 2 == 0);
	//	sum += *(ptr + i);
	//}

	////PRINTING ARRAY USING POINTER
	//for (size_t i = 0; i < size; i++)
	//{
	//	if (*(ptr + 1) != 0)
	//	cout << *(ptr + i) << " + ";
	//}cout << "\b\b= ";
	//cout << sum << endl;




//}

//void addNumbers(double n1, double n2)
//{
//	cout << n1 + n2;
//}
//
//
//
//
//void main()
//{
//	double n1 = 10.4;
//	double n2 = 20.5;
//
//	addNumbers(n1, n2);
//
//
//
//
//
//}

//void showData(int* ptr1, int* ptr2) {
//	if (ptr1 != NULL && ptr2 != NULL)
//	{
//		cout << "First " << ptr1 << endl;
//		cout << "Second " << ptr2 << endl;
//	}
//	else
//		cout << "No Data " << endl;
//
//}
//
//
//void main()
//{
//	int n1 = 100;
//	int n2 = 200;
//
//	int* ptr1 = &n1;
//	int* ptr2 = &n2;
//
//	showData(ptr1, 0);
//
//}


//void printArray(int* arr, int size)
//{
//	for (int  i = 0; i < size; i++)
//	{
//		cout << *(arr + i) << " ";
//	}
//	cout << endl;
//
//}
//
//void main()
//{
//	const int size = 5;
//	int arr[size] = {1,2,3,4,5};
//	printArray(arr, size);
//}


















