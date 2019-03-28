#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;

struct Employee {
public:
	string name;
	string surname;
	short int age;
	string discription;
	string post;
	short int workDays;
	short int weekends;
	short int salary;
	void ShowInfo() {
		int choice = 0;
		cout << "\n\n\tName: " << name << "\n\n\tSurname: " << surname << "\n\n\tAge: " << age << "\n\n\tDiscription: " << discription << "\n\n\tPost: " << post << "\n\n\tNumber of work days: " << workDays << "\n\n\tNumber of weekends: " << weekends << "\n\n\tSalary: " << salary << " grn" << endl;
	};
};

void Menu(Employee Bill)
{
	int choice = 0;
	cout << "\n\t\t\t\t\t\t  Accounting of the enterprise (0.1)." << endl;
	cout << "\n\tTo fill information about employee, PRESS 1. " << "\n\n\tTo add new employee, PRESS 2. " << "\n\n\tTo delete an employee and info about him, PRESS 3. " << "\n\n\tTo see information about all employees, PRESS 4. " << "\n\n\tTo see information about direct employee, PRESS 5. " << "\n\n\tTo exit, PRESS 0. " << endl << endl;
	cout << "\n\tYour choice: ";
	cin >> choice;
	if (int choise = 4) {
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
		Sleep(1000);
		system("cls");
		Bill.ShowInfo();
		cout << "\n\n\tTo move back press 1: ";
		cin >> choice;
		if (choice == 1) {
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
			Sleep(1000);
			system("cls");
			Menu(Bill);
		}
		if (choice == 0) {
			exit(0);
		}
	}
}

void LogIn(string login, string passwd, string login1, string passwd1, Employee Bill)
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
		Menu(Bill);
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

	Employee Bill;
	Bill.name = "Bill";
	Bill.surname = "Mc.Gonahan";
	Bill.age = 20;
	Bill.discription = "Nice guy with some nice skils!";
	Bill.post = "software developer";
	Bill.workDays = 25;
	Bill.weekends = 10;
	Bill.salary = 20000;

	cout << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tWe preapering everything to start, please wait a moment..." << endl;
	cout << "\n\t\t\t\t\t\tLoading..." << endl;
	Sleep(1000);
	system("cls");

	LogIn(login, passwd, login1, passwd1, Bill);

	system("pause");
	return 0;
}