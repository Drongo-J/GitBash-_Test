#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

struct Student
{
	char* name;
	char* surname;
	char* username;
	char* password;
	char* age;
	const char* registrationDay;
};


int students_count = 0;
Student** students = new Student * [students_count] {};

void ShowMenu()
{
	system("cls");
	cout << "\n ========= MAIN MENU =========" << endl;
	cout << "\n   Sign In (1) | Sing Up (2)  " << endl;
	cout << "\n =============================" << endl;
}

void SetPassword(char*& password)
{
	int i = 0;
	while ((password[i] = _getch()) != '\r')
	{
		if (int(password[i]) == 8)
		{
			if (i > 0)
			{
				password[i] = NULL;
				password[i - 1] = NULL;
				i -= 1;
				cout << "\b \b";
			}
		}
		else if (int(password[i]) == 32)
		{
			continue;
		}
		else
		{
			cout << "*";
			i++;
		}
	}
}


Student* GetNewStudent()
{
	cout << "\n =========== REGISTRATION =========== " << endl;
	cin.ignore();
	cin.clear();

	const int size = 100;
	char* name = new char[size] {};
	cout << "\n Enter your name : ";
	cin.getline(name, size);

	char* surname = new char[size] {};
	cout << " Enter your surname : ";
	cin.getline(surname, size);

	char* username = new char[size] {};
	cout << " Enter your username : ";
	cin.getline(username, size);

	char* password = new char[size] {};
	cout << " Enter your password : ";
	SetPassword(password);

	char* age = new char[size] {};
	cout << "\n Enter your age : ";
	cin.getline(age, size);

	cout << "\n ==================================== " << endl;

	Student* student = new Student{ name,surname,username,password,age,__DATE__ };
	return student;
}

void WriteArrayToFile(FILE* file, const char* filename)
{
	fopen_s(&file, filename, "wb");

	const char* name_s = "\n Name of student : ";
	const char* surname_s = "\n Surname of student : ";
	const char* username_s = "\n Username of student : ";
	const char* password_s = "\n Password of student : ";
	const char* age_s = " Age of student : ";
	const char* registrationday_s = "\n Registration day : ";
	const char* line = "\n================================";

	fwrite(line, sizeof(char), strlen(line), file);
	for (int x = 0; x < students_count; x++)
	{
		// Writing name to the file
		fwrite(name_s, sizeof(char), strlen(name_s), file);
		fwrite(students[x]->name, sizeof(char), strlen(students[x]->name), file);

		// Writing surname to the file
		fwrite(surname_s, sizeof(char), strlen(surname_s), file);
		fwrite(students[x]->surname, sizeof(char), strlen(students[x]->surname), file);

		// Writing username to the file
		fwrite(username_s, sizeof(char), strlen(username_s), file);
		fwrite(students[x]->username, sizeof(char), strlen(students[x]->username), file);

		// Writing password to the file
		fwrite(password_s, sizeof(char), strlen(password_s), file);
		fwrite(students[x]->password, sizeof(char), strlen(students[x]->password), file);

		// Writing age to the file
		fwrite(age_s, sizeof(char), strlen(age_s), file);
		fwrite(students[x]->age, sizeof(char), strlen(students[x]->age), file);

		// Writing registration day to the file
		fwrite(registrationday_s, sizeof(char), strlen(registrationday_s), file);
		fwrite(__DATE__, sizeof(char), strlen(__DATE__), file);


		fwrite(line, sizeof(char), strlen(line), file);
	}
	fclose(file);

}


void SignUp(FILE*& file, const char* filename)
{
	system("cls");
	Student* student = GetNewStudent();
	students[students_count] = student;
	students_count++;
	WriteArrayToFile(file, filename);
	cout << "\n You successfully signed up!" << endl;
	Sleep(2000);
}

void ReadFile(FILE* file, const char* filename)
{
	const int size = 100;
	fopen_s(&file, filename, "rb");
	char* text = new char[size] {};

	while (fread_s(text, size, sizeof(char), size, file) != 0)
	{
		cout << text;
		text = new char[size] {};
	}
	fclose(file);
}

void ShowAllStudents(FILE* file, const char* filename)
{
	ReadFile(file, filename);
}

int main()
{
	FILE* file;
	const char* filename = "students.bin";
	fopen_s(&file, filename, "rb");
	fclose(file);


	ShowMenu();
	while (true)
	{
		char choice = ' ';
		cout << "\n Enter your choice : ";
		cin >> choice;

		if (choice == '1')
		{
			//SignIn();
		}
		else if (choice == '2')
		{
			SignUp(file, filename);
			ShowMenu();
		}
		else if (choice == '3')
		{
			ShowAllStudents(file, filename);
		}

		else
		{
			system("cls");
			cout << "\n Incorrect Input!" << endl;
			Sleep(800);
			system("cls");
			ShowMenu();
		}
	}
	return 0;
}





