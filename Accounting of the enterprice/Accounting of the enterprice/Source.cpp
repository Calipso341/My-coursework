#include<iostream>
#include<Windows.h>
#include<fstream>
#include<string>

using namespace std;

struct Info {

	string name;
	string surname;
	short int age;
	string discription;
	string post;
	short int workDays;
	short int weekends;
	
	void ShowInfo() {

		cout << "\n\n\tName: " << name << "\n\n\tSurname: " << surname << "\n\n\tAge: " << age << "\n\n\tDiscription: " << discription << "\n\n\tPost: " << post << "\n\n\tNumber of work days: " << workDays << "\n\n\tNumber of weekends: " << weekends << endl;
	};

	string SaveFile() {

		string txt;

		txt = "\n\t__________________________________________\n\n\tName: " + name + "\n\n\tSurname: " + surname + "\n\n\tAge: " + to_string(age) + "\n\n\tDiscription: " + discription + "\n\n\tPost: " + post + "\n\n\tNamber of work days: " + to_string(workDays) + "\n\n\tNumber of weekends: " + to_string(weekends);

		return txt;
	}
};

void FillInfo() {

	int Size = 0;

	cout << "\n\tEnter the number of employees you will fill information about: ";

	cin >> Size;

	Info *employee = new Info[Size];

	for (int i = 0; i < Size; i++)
	{
		cout << "\n\t__________________________________________" << endl;
		cout << "\n\tEnter name of employee: ";
		cin >> employee[i].name;
		cout << "\n\tEnter surname of employee: ";
		cin >> employee[i].surname;
		cout << "\n\tEnter age of employee: ";
		cin >> employee[i].age;
		cout << "\n\tEnter discription about employee: ";
		cin >> employee[i].discription;
		cout << "\n\tEnter post of employee: ";
		cin >> employee[i].post;
		cout << "\n\tEnter number of work days of employee: ";
		cin >> employee[i].workDays;
		cout << "\n\tEnter weekends of employee: ";
		cin >> employee[i].weekends;
	}
	ofstream file;

	file.open("I.E.txt", ofstream::app);

	for (int i = 0; i < Size; i++)
	{
		file << employee[i].SaveFile();
		file.close();
	}
}

void Menu()
{
	int choice = 0;
	cout << "\n\t\t\t\t\t\t_______________________________________" << endl;
	cout << "\n\t\t\t\t\t\t  Accounting of the enterprise (0.1)." << endl;
	cout << "\n\t________________________________________________________________________________________________________" << endl;
	cout << "\n\tTo fill information about employee, PRESS 1. " << "\n\n\tTo add new employee, PRESS 2. " << "\n\n\tTo delete an employee and info about him, PRESS 3. " << "\n\n\tTo see information about all employees, PRESS 4. " << "\n\n\tTo see information about direct employee, PRESS 5. " << "\n\n\tTo exit, PRESS 0. " << endl << endl;
	cout << "\n\tYour choice: ";
	cin >> choice;
	if (int choice = 4) {
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
		//Sleep(1000);
		//system("cls");
		//Info.ShowInfo();
	}
	if (int choice = 1) {
	
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
		Sleep(1000);
		system("cls");
		FillInfo();
	 
	}
}

void LogIn(string login, string passwd, string login1, string passwd1)
{
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tTo enter the program, please, enter info below." << endl;
	cout << "\n\t\t\t\t\t\tEnter your login: ";
	cin >> login1;
	cout << "\n\t\t\t\t\t\tEnter your password: ";
	cin >> passwd1;

	if (login1 == login && passwd1 == passwd) {

		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tAccess is alowed.";
		Sleep(1000);
		system("cls");
		Menu();
	}
	else
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tBad password or login. Access denied." << endl << endl;
	}
}

int main() {

	string login = "1";
	string passwd = "1";

	string login1;
	string passwd1;

	cout << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tWe preapering everything to start, please wait a moment..." << endl;
	cout << "\n\t\t\t\t\t\tLoading..." << endl;
	Sleep(1000);
	system("cls");

	LogIn(login, passwd, login1, passwd1);

	system("pause");
	return 0;
}