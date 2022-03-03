#include <iostream>
using namespace std;

//void main()
//{
	//const int size = 5;
	//int arr[size] = {6,2,7,2,8};

	//int* ptr = arr;


	////1. Pointer to constant value
	//const int value = 10000;
	//const int* ptr = &value;
	//
	////*ptr = 0; error

	//int value2 = 200;
	//ptr = &value2;


	////2. Constant Pointer to Value
	//int value = 10000;
	//int value2 = 20000;
	//int* const ptr = &value;
	//*ptr = 5000;
	//// ptr = &value2; // error
	//cout << *ptr << endl;


	////3. Constant pointer to constant value
	//const int value = 10000;
	//const int* const ptr = &value;
	//
	//int a = 10;
	////*ptr = 1000;// error
	////ptr = &a; // error
//}

//void main()
//{
//	//int* ptr = new int(200);
//	//cout << *ptr << endl;
//	//delete ptr;
//	//cout << ptr << endl; //
//	// ptr = nullptr; // error
//	//// cout << *ptr << endl; // error
//
	//int size = 0;
	//cout << "\n enter size : ";
	//cin >> size;

	//int* arr = new int[size]{};

	//for (int i = 0; i < size; i++)
	//{
	//	arr[i] = i + 10;
	//}

	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
//
//
//}
//
//
//void main()
//{
//	//int size = 0;
//	//cout << "\n enter size : ";
//	//cin >> size;
//
//	//int* arr = new int[size] {};
//
//	//for (int i = 0; i < size; i++)
//	//{
//	//	arr[i] = i + 10;
//	//}
//
//
//	//for (int i = 0; i < size; i++)
//	//{
//	//	cout << arr[i] << " ";
//	//}
//
//	//delete[]arr;
//
//
//
//
//
//}


int* reserveArray(int *size)
{
	int* arr = new int[*size] {};
	return arr;
}

void initArray(int* arr, int *size) {
	int min = 1;
	int max = 100;

	int random = 0;
	for (size_t i = 0; i < *size; i++)
	{
		random = min + rand() % (max - min);
		arr[i] = random;
	}
}

void printArray(int* arr, int *size) {
	cout << "\n ";
	for (size_t i = 0; i < *size; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << "\b\b." << endl;
}

int* pushBack(int* arr, int *size, int number)
{
	int* newArray = new int[*size + 1]{};
	for (size_t i = 0; i < *size; i++)
	{
		newArray[i] = arr[i];
	}
	newArray[*size] = number;
	delete[]arr;
	arr = newArray;
	newArray = nullptr;
	(*(size))++;
	return arr;
}

int* pushFront(int* arr, int* size, int number)
{
	int* newArray = new int[*size + 1]{};
	newArray[0] = number;
	for (size_t i = 1; i < *size+1; i++)
	{
		newArray[i] = arr[i -1];
	}
	delete[]arr;
	arr = newArray;
	newArray = nullptr;
	(*(size))++;
	return arr;
}

int* addNumberIndex(int* arr, int* size, int number, int index)
{
	if (index >= 0 && index < *size)
	{
		int* newArray = new int[*size + 1]{};
		for (size_t i = 0; i < index; i++)
		{
			newArray[i] = arr[i];
		}
		newArray[index] = number;
		for (size_t i = index + 1; i < *size + 1; i++)
		{
			newArray[i] = arr[i - 1];
		}
		delete[]arr;
		arr = newArray;
		newArray = nullptr;
		(*(size))++;
		return arr;
	}
	else
		cout << "\n There is not such an index in the array." << endl;
}

void main()
{
	int size = 0;
	cout << "\n Enter a size : ";
	cin >> size;

	int index = 0;
	cout << "\n Enter index : ";
	cin >> index;

	int number = 0;
	cout << "\ Enter a number that you want to add : ";
	cin >> number;
	auto arr = reserveArray(&size);
	initArray(arr, &size);
	printArray(arr, &size);

	arr = addNumberIndex(arr, &size, number, index);
	printArray(arr, &size);

	//arr = pushBack(arr, &size, 55);
	//printArray(arr, &size);
	//arr = pushFront(arr, &size, 66);
	//printArray(arr, &size);
}