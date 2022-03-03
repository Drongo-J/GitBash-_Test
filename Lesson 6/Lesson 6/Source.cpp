#include <iostream>
using namespace std;

void main()
{
	////// Creating constant variables for the column and row of the matrix
	//const int row = 4;
	//const int col = 5;

	//// Initializing the matrix array
	//int arr[row][col] = {};

	//// Task 1
	//cout << "\n Task 1 : " << endl;
	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t k = 0; k < col; k++)
	//	{
	//		if (i % 2 == 1)
	//			arr[i][k] = 0;
	//		else
	//			arr[i][k] = 1;
	//	}
	//}

	//// Printing the matrix array
	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t k = 0; k < col; k++)
	//	{
	//		cout << " " << arr[i][k];
	//	}cout << endl;
	//}


	//// Task2
	//cout << "\n Task 2: " << endl;
	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t k = 0; k < col; k++)
	//	{
	//		if (k % 2 == 1)
	//			arr[i][k] = 0;
	//		else
	//			arr[i][k] = 1;
	//	}
	//}

	//// Printing the matrix array
	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t k = 0; k < col; k++)
	//	{
	//		cout << " " << arr[i][k];
	//	}cout << endl;
	//}

	

	// Creating constant variables for the column and row of the matrix
	const int row = 4;
	const int col = 5;

	// Initializing the matrix array
	int arr[row][col] = {};

	// Determining the minimum and maximum of random numbers
	int min = 2;
	int max = 5;

	srand(time(0));
	int random = 0;
	//random = min + rand() % (max - min);*/


	// Row 1
	for (int i = 0; i < row; i++)
	{
		for (size_t k = 0; k < col; k++)
		{
			if (k == 0)
			{ 
				random = min + rand() % (max - min);
				arr[i][k] = random;
				for (size_t z = 1; z < random+1; z++)
				{
					arr[i][z] = 1;
				}

			}
			
		}
	}

	//for (size_t i = 0; i < random+1; i++)
	//{
	//	for (size_t k = 0; k < col; k++)
	//	{
	//		if (k == 0)
	//		{
	//			min + rand() % (max - min);
	//			arr[i][k] = random;
	//		}
	//		else
	//			for (size_t i = 0; i < random+1; i++)
	//			{
	//				arr[]
	//			}
	//	}
	//}



	// Printing the matrix array
	cout << "\n Matrix array : " << endl;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t k = 0; k < col; k++)
		{
			cout << " " << arr[i][k];
		}cout << endl;
	}








}

// Task 1 and Task 2
//// Finding the sum of the even numbers in the array 
//int sum = 0;
///*for (size_t i = 0; i < row; i++)
//{
//	for (size_t k = 0; k < col; k++)
//	{
//		if (arr[i][k] % 2 == 0)
//			sum += arr[i][k];
//	}
//}*/

//// Finding the sum of the numbers in a diagonal
//for (size_t i = 0; i < row; i++)
//{
//	for (size_t k = 0; k < col; k++)
//	{
//		if (i == k || k + i == row - 1 )
//			sum += arr[i][k];
//	}
//}


/*int index = 0;
	cout << "\n\n";
	for (size_t i = 0; i < row; i++)
	{
		for (size_t k = 0; k < col; k++)
		{
			if (arr[i][k])
			cout << arr[i][k]

		}
	}*/

	//for (size_t x = 0; x < index; x++)
	//{
	//	if (newArr[x] >= 0)
	//		cout << newArr[x] << " ";
	//	else
	//		break;
	//}
	//// Answer
	//cout << "\n Sum = " << sum;
