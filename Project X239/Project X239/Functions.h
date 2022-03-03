#pragma once
#pragma once

#include <iostream>
#include <conio.h>
#include "Structs.h" 
using namespace std;

void ShowEntrance()
{
	cout << "\n ========= Entrance ========= " << endl;
	cout << "\n  Sign In (1) || Sign Up (2) " << endl;
	cout << "\n ============================ " << endl;
}

//i == 01234567
	// salam

void SetPassword(char* password)
{
	int i = 0;
	while ((password[i] = _getch()) != '\r')
	{
		if (int(password[i]) == 8)
		{
			if (password[i] != 0)
			{
				password[i] = NULL;
				password[i - 1] = NULL;
				password[i - 2] = NULL;
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


void GetNewUser()
{
	const int text_size = 100;
	cout << "\n ========= Registration ========= " << endl;

	//cout << "\n Enter your fullname : ";
	//char* fullname = new char[text_size] {};
	//cin.getline(fullname, text_size);

	//cout << " Enter new mail name : ";
	//char* mail = new char[text_size] {};
	//cin.getline(mail, text_size);

	cout << " Enter new password : ";
	char* password = new char[text_size] {};
	SetPassword(password);
	cout << endl;

	//cout << " Confirm your password : ";
	//char* confirm_password = new char[text_size] {};
	//SetPassword(confirm_password);

	//cout << "\n\n Name : " << fullname << endl;
	//cout << " Mail : " << mail << endl;
	cout << " Password : " << password << endl;

}




void SignUp(AllMails& all_mails, char* mail)
{
	int count = all_mails.mail_quantity;
	Mail** new_mails = new Mail * [count + 1]{};

	for (int x = 0; x < count; x++)
	{
		new_mails[x] = all_mails.mails[x];
	}

	new_mails[count] = new Mail{ mail };
	//all_mails = new_mails;
	new_mails = nullptr;
	all_mails.mail_quantity++;
}
