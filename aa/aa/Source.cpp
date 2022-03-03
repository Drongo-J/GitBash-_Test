#include <iostream>
using namespace std;

// STATIK MASSİVLƏR

// Task 1
// 1. Ölçüsü 5 olan massivə rəqəmlər daxil edin, daha sonra həmin
// massivi tərsinə ekrana çıxarın.

//void main()
//{
//	// Printing Headline
//	cout << "\n The program reverses an array filled with 5 numbers." << endl;
//	cout << "---------------------------------------------------------" << endl;
//
//	// Creating an array 
//	const int size = 5;
//	int myArray[size] = {};
//	
//	// Filling the array 
//	cout << endl;
//	int number = 0;
//	for (int x = 0; x < size; x++)
//	{
//		cout << " Enter number " << x + 1 << " : ";
//		cin >> number;
//		
//		myArray[x] = number;
//	}
//
//	// Printing the array
//	cout << "\n My Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Using for loop to reverse the array 
//	int a = 0;
//	for (int x = 0, y = size - 1; x < size / 2; x++, y--)
//	{
//		a = myArray[x];
//		myArray[x] = myArray[y];
//		myArray[y] = a;
//	}
//
//	// Using for loop to print the reversed array
//	cout << "\n My Reversed Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//	cout << endl;
//}



// Task 2
// 2. Ölçüsü 20 olan massiv yaradın, random rəqəmlərlə doldurun, indeksi
// cüt olan rəqəmləri ekrana çıxarın.

//void main()
//{
//	// Printing Headline
//	cout << "\n The program prints numbers with even and odd index in \'My Array\'." << endl;
//	cout << "------------------------------------------------------------------------" << endl;
//
//	// Creating an array
//	const int size = 20;
//	int myArray[size] = {};
//
//	// Determining the maximum and minimum of a random numbers
// 	srand(time(0));
//	int min = 0;
//	int max = 101;
//
//	// Filling the array with random numbers
//	for (int x = 0; x < size; x++)
//	{
//		int random = 0;
//		random = min + rand() % (max - min);
//
//		myArray[x] = random;;
//	}
//
//	// Printing the array
//	cout << "\n My Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Printing numbers with even index in "My Array"
//	cout << "\n Numbers with even index in \'My Array\' : ";
//	for (int x = 0; x < size; x++)
//	{
//		if (x % 2 == 0)
//			cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Printing numbers with odd index in "My Array"
//	cout << "\n Numbers with odd index in \'My Array\' : ";
//	for (int x = 0; x < size; x++)
//	{
//		if (x % 2 == 1)
//			cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//}



// Task 3
// 3. -20 və 20 arasında random rəqəmlərdən ibarət ölçüsü 10 olan massiv
// yaradın.Müsbət ədədlərin ədədi ortasını tapan program yazın.

//void main()
//{
//	// Printing Headline
//	cout << "\n The program prints the arithmetic mean of the positive numbers." << endl;
//	cout << "-----------------------------------------------------------------" << endl;
//
//	// Creating an array
//	const int size = 10;
//	int myArray[size] = {};
//
//	// Determining the maximum and minimum of a random numbers
//	srand(time(0));
//	int min = -21;
//	int max = 21;
//
//	// Filling the array with random numbers
//	int random = 0;
//	for (int x = 0; x < size; x++)
//	{
//		random = min + rand() % (max - min);
//
//		myArray[x] = random;
//	}
//	
//	// Printing the array 
//	cout << "\n My Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Printing positive numbers in the array
//	cout << "\n Positive numbers in \'My Array\' : ";
//	for (int x = 0; x < size; x++)
//	{
//		if (myArray[x] > 0)
//			cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Calculation of the number and sum of positive numbers	
//	float sum = 0;
//	float quantity = 0;
//	for (int x = 0; x < size; x++)
//	{
//		if (myArray[x] > 0)
//		{
//			sum += myArray[x];
//			quantity++;
//		}
//	}
//
//	// Printing the number and sum of positive numbers	
//	cout << "\n Sum of positive numbers is " << sum << "." << endl;
//	cout << " Number of positive numbers is " << quantity << "." << endl;
//	
//	// Calculation of the arithmetic mean of the positive numbers
//	float arithmeticMean = 0;
//	arithmeticMean = sum / quantity;
//
//	//Rounding floating point number to two decimal places
//	float answer = (int)(arithmeticMean * 100 + 0.5);
//	float answer2 = (float)answer / 100;;
//
//	// Answer
//	cout << "\n Arithmetic mean of the positive numbers is " << answer2 << "." << endl;
//}



// Task 4
// 4. -5 və 5 arasında random rəqəmlərdən ibarət ölçüsü 20 olan massiv
// yaradın.Mənfilərin, müsbətlərin, və sıfırların sayını tapan program
// yazın.

//void main()
//{
//	// Printing Headline
//	cout << "\n The program prints the number of positive and negative numbers, and zeros." << endl;
//    cout << "------------------------------------------------------------------------------" << endl;
//
//	// Creating an array  
//	const int size = 20;
//	int myArray[size] = {};
//
//	// Determining the maximum and minimum of a random numbers
//	srand(time(0));
//	int min = -5;
//	int max = 5;
//
//	// Filling the array with the random numbers 
//	int random = 0;
//	for (int x = 0; x < size; x++)
//	{
//		random = min + rand() % (max - min);
//		
//		myArray[x] = random;
//	}
//
//	// Printing the array
//	cout << "\n My Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b.";
//	cout << endl;
//
//	// Finding the number of positive and negative numbers, and zeros
//	int numberOfPositives = 0;
//	int numberOfNegatives = 0;
//	int numberOfZeros = 0;
//	for (int x = 0; x < size; x++)
//	{
//		if (myArray[x] > 0)
//			numberOfPositives++;
//		else if (myArray[x] < 0)
//			numberOfNegatives++;
//		else
//			numberOfZeros++;
//	}
//
//	// Printing the number of positive and negative numbers, and zeros
//	cout << "\n Number of positive numbers is " << numberOfPositives << "." << endl;
//	cout << " Number of negative numbers is " << numberOfNegatives << "." << endl;
//	cout << " Number of zeros is " << numberOfZeros << "." << endl;
//}



// Task 5
// 5. Ölçüsü 10 olan massiv yaradın və içərsini random rəqəmlərlə
// doldurun.​İndeksi ​cüt olan ədədlərin cəmini, ​indeksi ​tək olan
// ədədlərin isə ədədi ortasını tapın.

//void main()
//{
//	// Printing Headline
//	cout << "\n The program calculates the sum of numbers with even index \n and the arithmetic mean of the numbers with odd index." << endl;
//	cout << "--------------------------------------------------------" << endl;
//
//	// Creating an array
//	const int size = 10;
//	int myArray[size] = {};
//
//	// Determining the maximum and minimum of a random numbers
//	srand(time(0));
//	int min = 1;
//	int max = 100;
//
//	// Filling the array with the random numbers
//	int random = 0;
//	for (int x = 0; x < size; x++)
//	{
//		random = min + rand() % (max - min);
//				
//		myArray[x] = random;
//	}
//
//	// Printing the array
//	cout << "\n My Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Printing numbers with even index in "My Array"
//	cout << "\n Numbers with even index in \'My Array\' : ";
//	for (int x = 0; x < size; x++)
//	{
//		if (x % 2 == 0)
//			cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Printing numbers with odd index in "My Array"
//	cout << "\n Numbers with odd index in \'My Array\' : ";
//	for (int x = 0; x < size; x++)
//	{
//		if (x % 2 == 1)
//			cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Sum of the numbers with even index in array
//	int sumEvenIndex = 0;
//	for (int x = 0; x < size; x++)
//	{
//		if (x % 2 == 0)
//			sumEvenIndex += myArray[x];
//	}
//
//	// Sum of the numbers with odd index and their quantity in array
//	float sumOddIndex = 0;
//	float quantity = 0;
//	for (int x = 0; x < size; x++)
//	{
//		if (x % 2 == 1)
//		{
//			sumOddIndex += myArray[x];
//			quantity++;
//		}
//	}
//
//	// Calculation of the arithmetic mean of the numbers with odd index
//	float arithmeticMean = 0;
//	float arithmeticMean = sumOddIndex / quantity;
//
//	//Rounding floating point number to two decimal places
//	float answer = (int)(arithmeticMean * 100 + 0.5);
//	float answer2 = (float)answer / 100;
//
//	// Answer
//	cout << "\n\n Sum of the numbers with even index in array is " << sumEvenIndex << "." << endl;
//	cout << "\n Sum of the numbers with odd index in array is " << sumOddIndex << "." << endl;
//	cout << "\n Arithmetic mean of the numbers with odd index is " << answer2 << "." << endl;
//}



// Task 6
// 6. 10 simvoldan ibarət char massivi yaradın (random doldurun- nəzərə
// alın ki char 0 - dan 255 - ə qədərdir).Neçə hərf, rəqəm və punktuasiya
// simvolu olduğunu hesablayan program yazın. 

void main()
{
	// Printing Headline
	cout << "\n The program finds how many letters, numbers and punctuation marks are in the array." << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;

	// Creating an array
	const int size = 10;
	int myArray[size] = {};

	// Determining the maximum and minimum of a random numbers, letter and punctuation marks 
	// (32 - 64 punctuation marks, 48 -57 numbers, 65 - 90 || 97 - 122 letters)
	srand(time(0));
	int min = 32;
	int max = 122;

	// Filling the array with random numbers
	for ( int x = 0; x < size; x++)
	{
		myArray
	}



	for (int x = 0 ; x < size; x++)
	{
		if (myArray[])
	}

	// Printing the array	
	cout << "\n My Array : ";
	for (int x= 0; x < size; x++)
	{
		cout << myArray[x] << ", ";
	}
	cout << "\b\b." << endl;

	//		randomNumber = min + rand() % (max - min);

//	myArray[index] = randomNumber;
	//index++;


}



// Task 7 
// 7. Ölçüsü 50 olan massiv yaradın və içərisini random doldurun(1-100).
// İstifadəçi 1 - 100 arasında rəqəm daxil edir, və massivdə bu əddədən
// neçə dənə olduğunu hesablayan program yazın

//void main()
//{
//	// Printing Headline
//	cout << "\n The program calculates the number of number entered by the user in the array." << endl;
//	cout << "-------------------------------------------------------------------------------" << endl;
//
//	// Creating an array
//	const int size = 50;
//	int myArray[size] = {};
//
//	// Determining the maximum and minimum of a random numbers
//	srand(time(0));
//	int min = 0;
//	int max = 100;
//
//	// Filling the array with random numbers
//	int random = 0;
//	for (int x = 0; x < size; x++)
//	{
//		random = min + rand() % (max - min);
//
//		myArray[x] = random;
//	}
//
//	// Printing the array
//	cout << "\n My Array : ";
//	for (int x= 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Creating a variable for the searched number
//	int number = 0;
//
//	// Inputting the searched number
//	cout << "\n Enter the number that you are looking for : ";
//	cin >> number;
//
//	// Finding the number of the entered number in the array
//	int counter = 0;
//	for (int x = 0; x < size; x++)
//	{
//		if (myArray[x] == number)
//			counter++;
//	}
//
//	// Answer
//	cout << "\n The number of \'" << number << "\' in the array is " << counter << "." << endl;
//}



// Task 8 
// 8. 1 və 100 arasında random rəqəmlərdən ibarət ölçüsü 10 olan massiv
// yaradın. 3 - ə, 5 - ə.7 - ə bölünən rəqəmlərin sayını tapın. (ayrı - ayrı)

//void main()
//{
//	//Creating Headline
//	cout << "\n The program finds the number of numerals in the array that are divisible by 3, 5, 7 without remainder. (separately)" << endl;
//	cout << "------------------------------------------------------------------------------------------" << endl;
//
//	// Creating an array 
//	const int size = 10;
//	int myArray[size] = {};
//
//	// Determining the maximum and minimum of a random numbers
//	srand(time(0));
//	int min = 0;
//	int max = 100;
//
//	// Filling the array with the random numbers
//	int random = 0;
//	for (int x = 0; x < size; x++)
//	{
//		random = min + rand() % (max - min);
//
//		myArray[x] = random;
//	}
//
//	// Printing the array
//	cout << "\n My Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Creating variables
//	int divisible3 = 0;
//	int divisible5 = 0;
//	int divisible7 = 0;
//
//	// Creating arrays for divisible numbers seperately
//	int divisible3array[size] = {};
//	int divisible5array[size] = {};
//	int divisible7array[size] = {};
//
//	// Finding the number of numerals in the array that are divisible by 3, 5, 7 without remainder seperately
//	for (int x = 0; x < size; x++)
//	{
//		if (myArray[x] % 3 == 0 && myArray[x] >= 3)
//		{
//			divisible3++;
//			divisible3array[divisible3-1] = myArray[x];
//		}
//
//		if (myArray[x] % 5 == 0 && myArray[x] >= 5)
//		{
//			divisible5++;
//			divisible5array[divisible5-1] = myArray[x];
//		}
//
//		if (myArray[x] % 7 == 0 && myArray[x] >= 7)
//		{
//			divisible7++;
//			divisible7array[divisible7-1] = myArray[x];
//		}
//	}
//
//	// Answers
//	cout << "\n The number of numerals divisible by 3 is " << divisible3 << "." << endl;
//	string answer = " ";
//	if (divisible3 != 0)
//	{
//		if (divisible3 > 1)
//			answer = " They are ";
//		else
//			answer = " It is ";
//		
//		cout << answer;
//		for (int i = 0; i < divisible3; i++)
//		{
//			cout << divisible3array[i] << ", ";
//		}
//		cout << "\b\b." << endl;
//
//	}
//
//	cout << "\n The number of numerals divisible by 5 is " << divisible5 << "." << endl;
//	if (divisible5 != 0)
//	{
//		if (divisible5 > 1)
//			answer = " They are ";
//		else
//			answer = " It is ";
//
//		cout << answer;
//		for (int i = 0; i < divisible5; i++)
//		{
//			cout << divisible5array[i] << ", ";
//		}
//		cout << "\b\b." << endl;
//	}
//
//	cout << "\n The number of numerals divisible by 7 is " << divisible7 << "." << endl;
//	if (divisible7 != 0)
//	{
//		if (divisible7 > 1)
//			answer = " They are ";
//		else
//			answer = " It is ";
//
//		cout << answer;
//		for (int i = 0; i < divisible7; i++)
//		{
//			cout << divisible7array[i] << ", ";
//		}
//		cout << "\b\b." << endl;
//	}
//}



// Task 9 
// 9. 1 və 100 arasında random rəqəmlərdən ibarət ölçüsü 10 olan massiv
// yaradın. 3 - ə bölünüb 5 - ə bölünməyən rəqəmlərin sayını çıxarın. (eyni
// anda həm 3ə bölünsün həm 5 - ə bölünməsin)

//void main()
//{
//	// Creating Headline
//	cout << "\n The program finds the number of digits in the array that are divisible by 3, but at the same time not divisible by 5." << endl;
//	cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
//
//	// Creating an array 
//	const int size = 10;
//	int myArray[size] = {};
//
//	// Determining the maximum and minimum of a random numbers
//	srand(time(0));
//	int min = 0;
//	int max = 100;
//
//	// Filling the array with the random numbers
//	int random = 0;
//	for (int x = 0; x < size; x++)
//	{
//		random = min + rand() % (max - min);
//
//		myArray[x] = random;
//	}
//
//	// Printing the array
//	cout << "\n My Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Creating variable
//	int divisible3not5 = 0;
//
//	// Creating array for numerals in the array that are divisible by 3, but at the same time not divisible by 5
//	int divisible3not5array[size] = {};
//
//	// Finding the number of numerals in the array that are divisible by 3, but at the same time not divisible by 5 
//	for (int x = 0; x < size; x++)
//	{
//		if (myArray[x] % 3 == 0 && myArray[x] % 5 != 0 && myArray[x] > 3)
//		{
//			divisible3not5++;
//			divisible3not5array[divisible3not5 - 1] = myArray[x];
//		}
//	}
//
//	// Answer
//	cout << "\n The number of numerals that are divisible by 3, but at the same time not divisible by 5 is " << divisible3not5 << "." << endl;
//	string answer = " ";
//	if (divisible3not5 != 0)
//	{
//		if (divisible3not5 > 1)
//			answer = " They are ";
//		else
//			answer = " It is ";
//
//		cout << answer;
//		for (int x = 0; x < divisible3not5; x++)
//		{
//			cout << divisible3not5array[x] << ", ";
//		}
//		cout << "\b\b." << endl;
//	}
//}



// Task 10
// 10. -10 və 30 arasında random rəqəmlərdən ibarət ölçüsü 10 olan
// massiv yaradın.Birinci mənfi ədəddən sonra gələn bütün rəqəmləri
// toplayan program yazın. (1, 2, -3, 4, 5, -6, 7 bu halda, 4 + 5 + (-6) + 7
// olacaq)

//void main()
//{
//	// Creating Headline
//	cout << "\n The program that collects all the numbers that come after the first negative number." << endl;
//	cout << "--------------------------------------------------------------------------------------" << endl;
//
//	// Creating an array 
//	const int size = 10;
//	int myArray[size] = {};
//
//	// Determining the maximum and minimum of a random numbers
//	srand(time(0));
//	int min = -10;
//	int max = 30;
//
//	// Filling the array with the random numbers
//	int random = 0;
//	for (int x = 0; x < size; x++)
//	{
//		random = min + rand() % (max - min);
//
//		myArray[x] = random;
//	}
//
//	// Printing the array
//	cout << "\n My Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Finding the first negative number's index
//	int negativeNumberIndex = 0;
//	for (int x = 0; x < size; x++)
//	{
//		if (myArray[x] < 0)
//		{
//			negativeNumberIndex = x;
//			break;
//		}
//	}
//
//	// Printing the first negative number
//	cout << "\n The first negative number in the array : ";
//	for (int q = 0; q < size; q++)
//	{
//		if (q == negativeNumberIndex)
//			cout << myArray[q];
//	}
//	cout << endl;
//
//	// Creating array for the numbers that come after the first negative number
//	int afterNegative[size] = {};
//	int afterNegativeCounter = 0;
//	for (int z = negativeNumberIndex, i = 0; z < size; z++,i++)
//	{
//		afterNegative[i] = myArray[z];
//		afterNegativeCounter++;
//	}
//	
//	// Printing the numbers that come after the first negative number
//	cout << "\n Numbers after the first negative number : ";
//	for (int r = 1; r < afterNegativeCounter; r++)
//	{
//		cout << afterNegative[r] << ", "; 
//	}
//	cout << "\b\b." << endl;
//
//
//	// Collecting all the numbers that come after the first negative number
//	int sum = 0;
//	for (int y = negativeNumberIndex + 1; y < size; y++)
//	{
//		sum += myArray[y];
//	}
//
//
//	// Answer
//	cout << "\n ";
//	for (int i = 1; i < afterNegativeCounter; i++)
//	{
//		if (afterNegative[i] < 0)
//			cout << "(" << afterNegative[i] << ")" << " + ";
//		else
//			cout << afterNegative[i] << " + ";
//	}
//	cout << "\b\b= " << sum << endl;
//}



// Task 11
// 11. -30 və 20 arasında random rəqəmlərdən ibarət ölçüsü 10 olan
// massiv yaradın.Birinci müsbət ədəddən sonra gələn bütün rəqəmləri
// toplayan program yazın.

//void main()
//{
//	// Creating Headline
//	cout << "\n The program that collects all the numbers that come after the first positive number." << endl;
//	cout << "--------------------------------------------------------------------------------------" << endl;
//
//	// Creating an array 
//	const int size = 10;
//	int myArray[size] = {};
//
//	// Determining the maximum and minimum of a random numbers
//	srand(time(0));
//	int min = -30;
//	int max = 20;
//
//	// Filling the array with the random numbers
//	int random = 0;
//	for (int x = 0; x < size; x++)
//	{
//		random = min + rand() % (max - min);
//
//		myArray[x] = random;
//	}
//
//	// Printing the array
//	cout << "\n My Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Finding the first positive number's index
//	int positiveNumberIndex = 0;
//	for (int x = 0; x < size; x++)
//	{
//		if (myArray[x] > 0)
//		{
//			positiveNumberIndex = x;
//			break;
//		}
//	}
//
//	// Printing the first positive number
//	cout << "\n The first positive number in the array : ";
//	for (int q = 0; q < size; q++)
//	{
//		if (q == positiveNumberIndex)
//			cout << myArray[q];
//	}
//	cout << endl;
//
//	// Creating array for the numbers that come after the first positive number
//	int afterPositive[size] = {};
//	int afterPositiveCounter = 0;
//	for (int z = positiveNumberIndex, i = 0; z < size; z++,i++)
//	{
//		afterPositive[i] = myArray[z];
//		afterPositiveCounter++;
//	}
//	
//	// Printing the numbers that come after the first positive number
//	cout << "\n Numbers after the first positive number : ";
//	for (int r = 1; r < afterPositiveCounter; r++)
//	{
//		cout << afterPositive[r] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//
//	// Collecting all the numbers that come after the first positive number
//	int sum = 0;
//	for (int y = positiveNumberIndex + 1; y < size; y++)
//	{
//		sum += myArray[y];
//	}
//
//
//	// Answer
//	cout << "\n ";
//	for (int i = 1; i < afterPositiveCounter; i++)
//	{
//		if (afterPositive[i] < 0)
//			cout << "(" << afterPositive[i] << ")" << " + ";
//		else
//			cout << afterPositive[i] << " + ";
//	}
//	cout << "\b\b= " << sum << endl;
//}



// Task 12
// 12. Ölçüsü 20 olan və random rəqəmlərdən ibarət massiv yaradın.
// Massivin maximum və minimum elemtini tapan program yazın.
// (Dəyəri və indeksi qaytarın)

//void main()
//{
//	// Creating Headline
//	cout << "\n The program finds the maximum and minimum number in the array." << endl;
//	cout << "-----------------------------------------------------------------" << endl;
//
//	// Creating an array 
//	const int size = 20;
//	int myArray[size] = {};
//
//	// Determining the maximum and minimum of a random numbers
//	srand(time(0));
//	int min = 0;
//	int max = 1000;
//
//	// Filling the array with the random numbers
//	int random = 0;
//	for (int x = 0; x < size; x++)
//	{
//		random = min + rand() % (max - min);
//
//		myArray[x] = random;
//	}
//
//	// Printing the array
//	cout << "\n My Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//  // Creating variables for minimum and maximum numbers in the array
//	int minNum = 1000;
//	int maxNum = 0;
//	
//	// Finding the minimum number in the array
//	for (int x = 0; x < size; x++)
//	{
//		if (myArray[x] < minNum)
//			minNum = myArray[x];
//	}
//
//	// Finding th maximum number in the array 
//	for (int y = 0; y < size; y++)
//	{
//		if (myArray[y] > maxNum)
//			maxNum = myArray[y];
//	}
//
//	// Results
//	cout << "\n The maximum number in the array is " << maxNum << "." << endl;
//	cout << "\n The minimum number in the array is " << minNum << "." << endl;
//}



// Task 13
// 13. 10 ölçülü kəsr ədədlərdən ibarət massiv yaradın. Neçə rəqəmin
// kəsr hissəsinin olmadığını ekrana çıxaran program yazın. (məs: {12
// 12.5, 10.1, 1, 2} kəsr hissəsi olmayan ədədlər 3)

//void main()
//{
//	// Creating Headline
//	cout << "\n The program displays how many elements do not have a fractional part." << endl;
//	cout << "------------------------------------------------------------------------" << endl;
//
//	// Creating an array 
//	const int size = 20;
//	float myArray[size] = {};
//
//	// Determining the maximum and minimum of a random numbers
//	srand(time(0));
//	int min = 0;
//	int max = 100;
//	int min2 = 1;
//	int max2 = 3;
//
//	// Filling the array with the random numbers
// 	int randomInteger = 0;
//	float randomFloat = 0;
//	int floatOrInteger = 0;
//	for (int x = 0; x < size; x++)
//	{
//		floatOrInteger = min2 + rand() % (max2 - min2);;
//
//		if (floatOrInteger == 2)
//		{
//			randomInteger = min + rand() % (max - min);
//			myArray[x] = randomInteger;
//		}
//		else
//		{
//			float a = 0 + rand() % (10 - 0);
//			randomFloat = (float(rand()) / float((1001)) * a);
//			myArray[x] = randomFloat;
//		}
//
//	}
//	
//	// Printing the array
//	cout << "\n My Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//	
//	// Creating variable for number of non-fractional numbers 
//	int non_fractional = 0;
//
//	// Creating array for non-fractional numbers 
//	int non_fractional_array[size] = {};
//
//	// Finding how many digits do not have a fraction part
//	for (int h = 0; h < size; h++)
//	{
//		if ((int)myArray[h] == myArray[h])
//		{
//			non_fractional++;
//			non_fractional_array[non_fractional - 1] = myArray[h];
//		}
//	}
//
//	// Answer
//	cout << "\n The number of non-fractional elements is " << non_fractional << "." << endl;
//
//	string answer = " ";
//	if (non_fractional == 0)
//		answer = " It is ";
//	else
//		answer = " They are ";
//
//	cout << "\n" << answer;
//	for (int x = 0; x < non_fractional; x++)
//	{
//		cout << non_fractional_array[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//}



// Task 14
// 14. 1 və 200 arasında random rəqəmlərdən ibarət ölçüsü 20 olan
// massiv yaradın. 1 rəqəmli, 2 rəqəmli, 3 rəqəmli ədədlərin faiz nisbəti
// ilə müqayisəsini edən program yazın.

//void main()
//{
//	// Creating Headline
//	cout << "\n The program compares the percentage of the number of 1-digit, 2-digit and 3-digit numbers in the array." << endl;
//	cout << "---------------------------------------------------------------------------------------------------------" << endl;
//
//	// Creating an array 
//	const int size = 20;
//	int myArray[size] = {};
//
//	// Determining the maximum and minimum of a random numbers
//	srand(time(0));
//	int min = 1;
//	int max = 200;
//
//	// Filling the array with the random numbers
//	int random = 0;
//	for (int x = 0; x < size; x++)
//	{
//		random = min + rand() % (max - min);
//
//		myArray[x] = random;
//	}
//
//	// Printing the array
//	cout << "\n My Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Creating variable for number of 1-digit, 2-digit and 3-digit numbers
//	int count1digit = 0;
//	int count2digit = 0;
//	int count3digit = 0;
//	
//	// Creating array for 1-digit, 2-digit and 3-digit numbers
//	int digit1array[size] = {};
//	int digit2array[size] = {};
//	int digit3array[size] = {};
//
//
//	// Finding the 1-digit, 2-digit and 3-digit numbers
//	for (int e = 0; e < size; e++)
//	{
//		if (myArray[e] / 100 < 10 && myArray[e] / 100 >= 1)
//		{
//			count3digit++;
//			digit3array[count3digit - 1] = myArray[e];
//		}
//		else if (myArray[e] / 10 < 10 && myArray[e] / 10 >= 1)
//		{
//			count2digit++;
//			digit2array[count2digit - 1] = myArray[e];
//		}
//		else
//		{
//			count1digit++;
//			digit1array[count1digit - 1] = myArray[e];
//		}
//	}
//
//	// Answers
//	cout << "\n The number of 1-digit elements is " << count1digit << "." << endl;
//	string answer = " ";
//	if (count1digit != 0)
//	{
//		if (count1digit > 1)
//			answer = " They are ";
//		else
//			answer = " It is ";
//			
//		cout << answer;
//		for (int i = 0; i < count1digit; i++)
//		{
//			cout << digit1array[i] << ", ";
//		}
//		cout << "\b\b." << endl;
//	
//	}
//	
//	cout << "\n The number of 2-digit elements is " << count2digit << "." << endl;
//	if (count2digit != 0)
//	{
//		if (count2digit > 1)
//			answer = " They are ";
//		else
//			answer = " It is ";
//	
//		cout << answer;
//		for (int i = 0; i < count2digit; i++)
//		{
//			cout << digit2array[i] << ", ";
//		}
//		cout << "\b\b." << endl;
//	}
//	
//	cout << "\n The number of 3-digit elements is " << count3digit << "." << endl;
//	if (count3digit != 0)
//	{
//		if (count3digit > 1)
//			answer = " They are ";
//		else
//			answer = " It is ";
//	
//		cout << answer;
//		for (int i = 0; i < count3digit; i++)
//		{
//			cout << digit3array[i] << ", ";
//		}
//		cout << "\b\b." << endl;
//	}
//}



// Task 15
// 15. 2 və 200 arasında random rəqəmlərdən ibarət ölçüsü 20 olan
// massiv yaradın.Massivdəki bütün sadə rəqəmləri ekrana çıxaran
// program yazın.

//void main()
//{
//	// Creating Headline
//	cout << "\n The program displays all the prime numbers in the array." << endl;
//	cout << "----------------------------------------------------------" << endl;
//
//	// Creating an array 
//	const int size = 20;
//	int myArray[size] = {};
//
//	// Determining the maximum and minimum of a random numbers
//	srand(time(0));
//	int min = 2;
//	int max = 200;
//
//	// Filling the array with the random numbers
//	int random = 0;
//	for (int x = 0; x < size; x++)
//	{
//		random = min + rand() % (max - min);
//
//		myArray[x] = random;
//	}
//
//	// Printing the array
//	cout << "\n My Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//	
//	// Creating a variable for the number of prime numbers
//	int primeNumberCounter = 0;
//
//	// Creating an array for prime numbers
//	int primeNumbersArray[size] = {};
//
//	// Finding all the prime numbers in an array.
//	for (int w = 0; w < size; w++)
//	{
//		int counter = 0;
//		for (int v = 1; v < myArray[w]+1; v++)
//		{
//			if (myArray[w] % v == 0)
//				counter++;
//		}
//
//		if (counter == 2)
//		{
//			primeNumberCounter++;
//			primeNumbersArray[primeNumberCounter - 1] = myArray[w];
//		}
//	}
//
//	// Answer
//	cout << "\n The number of prime numbers in the array is " << primeNumberCounter << "." << endl;
//	if (primeNumberCounter != 0)
//	{
//		string answer = " ";
//		if (primeNumberCounter > 1)
//			answer = " They are ";
//		else
//			answer = " It is ";
//
//		cout << answer;
//		for (int y = 0; y < primeNumberCounter; y++)
//		{
//			cout << primeNumbersArray[y] << ", ";
//		}
//		cout << "\b\b." << endl;
//	}
//}



// Task 16
// 16. Ölçüsü 10 olan massiv yaradın və içərsini random rəqəmlərlə
// doldurun.Massivdəki rəqəmlərin yerlərini tərsinə çevirən program
// yazın. (0 - cı indeksi 9 - la, 1 - i 8 - lə və s.)

//void main()
//{
//	// Creating Headline
//	cout << "\n The program inverts the positions of numbers in the array." << endl;
//	cout << "-------------------------------------------------------------" << endl;
//
//	// Creating an array 
//	const int size = 10; // Suitable for both even and odd numbered sizes
//	int myArray[size] = {};
//
//	// Determining the maximum and minimum of a random numbers
//	srand(time(0));
//	int min = 1;
//	int max = 100;
//
//	// Filling the array with the random numbers
//	int random = 0;
//	for (int x = 0; x < size; x++)
//	{
//		random = min + rand() % (max - min);
//
//		myArray[x] = random;
//	}
//
//	// Printing the array
//	cout << "\n My Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Reversing the position of the numbers
//	for (int x = 0; x < size / 2; x++)
//	{
//		int temp = myArray[x];
//		myArray[x] = myArray[x + size - (x + (x + 1))];
//		myArray[x + size - (x + (x + 1))] = temp;
//	}
//
//	// Answer
//	// Printing the reversed array
//	cout << "\n My Reversed Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//}



// Task 17 
// 17. Ölçüsü 10 olan massiv yaradın və içərsini random rəqəmlərlə
// doldurun.Massivdəki qonşu elementlərin yerini dəyişən program
// yazın.

//void main()
//{
//	// Creating Headline
//	cout << "\n The program changes the position of adjacent numbers in the array." << endl;
//	cout << "---------------------------------------------------------------------" << endl;
//
//	// Creating an array 
//	const int size = 11; // Suitable for both even and odd numbered sizes
//	int myArray[size] = {};
//
//	// Determining the maximum and minimum of a random numbers
//	srand(time(0));
//	int min = 1;
//	int max = 100;
//
//	// Filling the array with the random numbers
//	int random = 0;
//	for (int x = 0; x < size; x++)
//	{
//		random = min + rand() % (max - min);
//
//		myArray[x] = random;
//	}
//
//	// Printing the array
//	cout << "\n My Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Reversing the position of the numbers
//	for (int x = 0; x < size - 1; x++)
//	{
//		int temp = myArray[x];
//		myArray[x] = myArray[x + 1];
//		myArray[x + 1] = temp;
//		x++;
//	}
//
//	// Answer
//	// Printing the reversed array
//	cout << "\n My Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << myArray[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//}



// Task 18
// 18. Ölçüsü 5 olan iki massiv yaradın A və B . Ölçüsü 10 olan üçüncü
// massiv yaradın C.C massivinə A və B dən sıra ilə elemntləri
// kopyalayın . (məs: С[0] = A[0], С[1] = B[0], C[2] = A[1], C[3] = B[1] və s.)

//void main()
//{
//	// Creating Headline
//	cout << "\n The program copies elements from A and B to the C array orderly." << endl;
//	cout << "-------------------------------------------------------------------" << endl;
//		
//	// Creating the arrays 
//	const int size = 5;
//	int arrayA[size] = {};
//	int arrayB[size] = {};
//	int arrayC[2*size] = {};
//		
//	// Determining the maximum and minimum of a random numbers
//	srand(time(0));
//	int min = 1;
//	int max = 100;
//		
//	// Filling the arrays with the random numbers
//	int random = 0;
//	for (int x = 0; x < size; x++)
//	{
//		random = min + rand() % (max - min);
//		
//		arrayA[x] = random;
//	}	
//
//	for (int x = 0; x < size; x++)
//	{
//		random = min + rand() % (max - min);
//		
//		arrayB[x] = random;
//	}
//		
//	// Printing the arrays
//	cout << "\n A Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << arrayA[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//	
//	cout << "\n B Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << arrayB[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Filling the array C with array A's and B's elements
//	int y = 0;
//	for (int x = 0; x < 2*size; x++)
//	{
//		arrayC[x] = arrayA[y];
//		arrayC[x+1] = arrayB[y];
//		x++;
//		y++;
//	}
//
//  // Result
//	// Printing the C array
//	cout << "\n The C array : ";
//	for (int x = 0; x < 2*size; x++)
//	{
//		cout << arrayC[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//}



// Task 19
// 19. Bir massivi ikinci massivə kopya edən program yazın. Şərt: kopya
// edərkən birinci sıfırdan kiçik elementlər daha sonra 0 - lar daha sonra
// 0 - dan böyük elementləri kopya etməlidir.

//void main()
//{
//	// Creating Headline
//	cout << "\n The program copies an array to other arrays by arranging numbers from small to large." << endl;
//	cout << "---------------------------------------------------------------------------------------" << endl;
//		
//	// Creating the arrays
//	const int size = 10;
//	int arrayA[size] = {};
//	int arrayAcopy[size] = {};
//	int arrayB[size] = {};
//
//		
//	// Determining the maximum and minimum of a random numbers
//	srand(time(0));
//	int min = 1;
//	int max = 100;
//		
//	// Filling the A array with the random numbers
//	int random = 0;
//	for (int x = 0; x < size; x++)
//	{
//		random = min + rand() % (max - min);
//		
//		arrayA[x] = random;
//	}	
//		
//	// Printing the arrays
//	cout << "\n A Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << arrayA[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Copying the array A
//	for (int x = 0; x < size; x++)
//	{
//		arrayAcopy[x] = arrayA[x];
//	}
//
//	// Sorting the array A_copy
//	bool swapped = false;
//	int counter = 0;
//	for (int i = 0; i < size; i++)
//	{
//		swapped = false;
//		for (int k = 0; k < size - 1 - i; k++)
//		{
//			counter++;
//			if (arrayAcopy[k] > arrayAcopy[k + 1])
//			{
//				swapped = true;
//				int temp = arrayAcopy[k];
//				arrayAcopy[k] = arrayAcopy[k + 1];
//				arrayAcopy[k + 1] = temp;
//			}
//		}
//		if (!swapped)
//		{
//			break;
//		}
//	}
//	
//	// Copying the array A_copy to the array B
//	for (int x = 0; x < size; x++)
//	{
//		arrayB[x] = arrayAcopy[x];
//	}
//
//	// Result
//	// Printing the array B
//	cout << "\n A copied to the B with the elements in ascending order : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << arrayB[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//}



// Task 20
// 20. Ölçüsü 10 olan C massivini , ölçüləri 5 olan A və B massivinə
// kopiya etməlisniz.Şərt = > (məs : A[0] = C[0], B[0] = C[1], A[1] = C[2],
// B[1] = C[3] və s.)

//void main()
//{
//	// Creating Headline
//	cout << "\n The program copies elements from C to the A and B array orderly." << endl;
//	cout << "-------------------------------------------------------------------" << endl;
//		
//	// Creating the arrays 
//	const int size = 5;
//	int arrayA[size] = {};
//	int arrayB[size] = {};
//	int arrayC[2*size] = {};
//		
//	// Determining the maximum and minimum of a random numbers
//	srand(time(0));
//	int min = 1;
//	int max = 100;
//		
//	// Filling the array C with the random numbers
//	int random = 0;
//	for (int x = 0; x < 2*size; x++)
//	{
//		random = min + rand() % (max - min);
//		
//		arrayC[x] = random;
//	}	
//		
//	// Printing the array C
//	cout << "\n C Array : ";
//	for (int x = 0; x < 2*size; x++)
//	{
//		cout << arrayC[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	// Filling the arrays A and B with array C's elements
//	int x = 0;
//	for (int y = 0; y < 2*size; y++)
//	{
//		arrayA[x] = arrayC[y];
//		arrayB[x] = arrayC[y+1];	
//		x++;
//		y++;
//	}
//
//	// Result
//	// Printing the arrays A and B
//	cout << "\n A Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << arrayA[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//
//	cout << "\n B Array : ";
//	for (int x = 0; x < size; x++)
//	{
//		cout << arrayB[x] << ", ";
//	}
//	cout << "\b\b." << endl;
//}



