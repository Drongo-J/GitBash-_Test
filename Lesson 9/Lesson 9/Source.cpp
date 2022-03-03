#include <iostream>
using namespace std;

//void addNumbers(int num1, float num2)
//{
//	float result = num1 + num2;
//	cout << "Result : " << result << endl;
//
//}
//
//
//void main()
//{
//	addNumbers(10, 'A');
//	addNumbers(10, 10.3);
//}


//void showUserAccess(double money, char cardType)
//{
//	system("cls");
//	if (money >= 1000 || cardType == 'm')
//	{
//		cout << "Welcome to the system" << endl;
//	}
//	else
//	{
//		cout << "Access Denied" << endl;
//	}
//}
//
//void main()
//{
//	double money = 0;
//	cout << "Enter money : ";
//	cin >> money;
//
//	char cardType = ' ';
//	cout << "Enter card type (m|v): ";
//	cin >> cardType;
//
//	showUserAccess(money, cardType);
//}

//int getProduct(int num1, int num2, int num3)
//{
//	int product = num1 * num2 * num3;
//	return product;
//}
//
//
//
//
//
//
//void main()
//{
//	int result = getProduct(10, 20, 30);
//	cout << "Result : " << result << endl;
//}


//bool isPrime(int number)
//{
//	int counter = 0;
//	for (int x = 1; x < number+1; x++)
//	{
//		if (number % x == 0)
//		{
//			counter++;
//		}
//
//	}
//	if (counter == 2)
//	{
//		return true;
//	}
//	return false;
//}
//
//void showAllPrimes(int start, int end)
//{
//	for (size_t x = start; x <= end; x++)
//	{
//		if (isPrime(x))
//			cout << x << endl;
//
//	}
//}
//
//void main()
//{
//	showAllPrimes(10, 20);
//}

//bool isPrime(int number) {
//	int counter = 0;
//	for (size_t i = 1; i <= number; i++)
//	{
//		if (number % i == 0) {
//			counter++;
//		}
//	}
//	if (counter == 2) {
//		return true;
//	}
//	return false;
//}
//
//void showAllPrimes(int start, int end) {
//	for (size_t i = start; i <= end; i++)
//	{
//		if (isPrime(i)) {
//			cout << i << endl;
//		}
//	}
//}
//
//void main() {
//	showAllPrimes(10, 20);
//


//int calculator(int num, int num2)
//{
//	char oper;
//	cout << "Enter operator : ";
//	cin >> oper;
//	if (oper == '+')
//		return num + num2;
//	if (oper == '-')
//		return num - num2;
//	if (oper == '*')
//		return num * num2;
//	if (oper == '/' && num2 == 0)
//	{
//		cout << "Zero Division Error!" << endl;
//		return -1;
//	}
//	if (oper == '/' && num2 != 0)
//		return num / num2;
//
//}

//int adding(int num, int num2)
//{
//	return num + num2;
//}
//
//int subtracting(int num, int num2)
//{
//	return num - num2;
//}
//
//int division(int num, int num2)
//{
//	if (num2 == 0)
//	{
//		cout << "Zero Division Error!" << endl;
//		return -1;
//	}
//	return num / num2;
//}
//
//int multiplying(int num, int num2)
//{
//	return num * num2;
//}
//
//void main()
//{
//	int num1 = 0;
//	cout << "\nEnter number 1 : ";
//	cin >> num1;
//
//	int num2 = 0;
//	cout << "Enter number 2 : ";
//	cin >> num2;
//
//	char op;
//	cout << "\nEnter operator +,-,*,/,^  : ";
//	cin >> op;
//
//	if (op == '+')
//		cout << adding(num1, num2);
//	if (op == '-')
//		cout << subtracting(num1, num2);
//	if (op == '*')
//		cout << multiplying(num1, num2);
//	if (op == '/')
//		cout << division(num1, num2);
//}

void initArray(int arr[], int size)
{
	int min = 1;
	int max = 100;
	for (int i = 0; i < size; i++)
	{
		int random = min + rand() % (max - min);
		arr[i] = random;
	}
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int getSumOfArray(int arr[], int size)
{
	int sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	return sum;
}

bool isPrime(int number) {
	int counter = 0;
	for (size_t i = 1; i <= number; i++)
	{
		if (number % i == 0) {
			counter++;
		}
	}
	if (counter == 2) {
		return true;
	}
	return false;
}

void primeNumbers(int arr[], int size) {
	for (size_t i = 0; i <= size; i++)
	{
		if (isPrime(arr[i])) {
			cout << arr[i] << " ";
		}
	}
}

void initArrayRange(int arr[], int size, int minimum, int maximum)
{
	int min = minimum;
	int max = maximum;
	for (int i = 0; i < size; i++)
	{
		int random = min + rand() % (max - min);
		arr[i] = random;
	}
}

bool isPerfect(int number)
{
	int counter = 0;
	int sum = 0;
	for (size_t i = 1; i < number; i++)
	{
		if (number % i == 0) {
			sum += i;
		}
	}
	if (sum == number) {
		return true;
	}
	return false;


}

void showPerfectNumbers(int arr[], int size)
{
	for (size_t i = 0; i <= size; i++)
	{
		if (isPerfect(arr[i])) {
			cout << arr[i] << " ";
		}
	}
}


void main()
{
	const int size = 10;
	int arr[size] = {};
	int arr2[size] = {};

	initArray(arr, size);
	cout << "\n My Array : ";
	printArray(arr, size);

	int result1 = getSumOfArray(arr, size);
	cout << "\n Task 1 \n Sum of numbers is : " << getSumOfArray(arr, size) << endl;

	cout << "\n Task 2 " << endl;
	initArrayRange(arr2, size, 1 , 100000);
	printArray(arr2, size);

	cout << "\n Task 3 \n Prime numbers in the array : ";
	primeNumbers(arr, size);

	cout << "\n\n Task 4 \n Perfect numbers in the array : ";
	showPerfectNumbers(arr2, size);
}




samammdlsmsmlsmlmslmdddd