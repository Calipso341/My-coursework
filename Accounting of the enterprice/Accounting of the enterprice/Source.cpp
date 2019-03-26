#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;

void Menu()
{
	cout << "\n\t\t\t\t\t\tAccout of the enterprise (0.1)." << endl;
	cout << "\n\t===============================================================================" << endl;
	cout << "\n\tTo fill information about employee, please PRESS 1. " << endl;
	cout << "\n\tTo add new employee, please PRESS 2. " << endl;
	cout << "\n\tTo delete an employee and info about him, please PRESS 3. " << endl;
	cout << "\n\tTo see information about all employees, please PRESS 4. " << endl;
	cout << "\n\tTo see information about direct employee, please PRESS 5. " << endl;
	cout << "\n\tTo exit, please PRESS 0. " << endl << endl;
}

void LogIn(string login, string passwd, string login1, string passwd1)
{
	cout << "\n\tTo enter the program, please, enter info below." << endl;
	cout << "\n\tEnter your login: ";
	cin >> login1;
	cout << "\n\tEnter your password: ";
	cin >> passwd1;

	if (login1 == login && passwd1 == passwd) {

		cout << "\n\tAccess is alowed.";
		Sleep(1000);
		system("cls");
		Menu();
	}
	else
	{
		cout << "\n\tAccess denied." << endl;
	}
}

int main() {

	string login = "qwerty";
	string passwd = "qwerty";

	string login1;
	string passwd1;

	cout << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tWe preapering all to start, please wait a moment..." << endl;
	cout << "\n\t\t\t\t\t\tLoading..." << endl;
	Sleep(1000);
	system("cls");

	LogIn(login, passwd, login1, passwd1);

	system("pause");
	return 0;
}