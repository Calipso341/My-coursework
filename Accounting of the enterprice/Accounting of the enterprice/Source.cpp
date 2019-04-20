#include<iostream>
#include<Windows.h>
#include<string>
#include<fstream>

using namespace std;

struct WorkerInfo
{
	string name;
	string surname;
	string discription;
	string post;
	long long int phone;
	int age;
	int workdays;
	int weekends;
};

void FillInfo()
{
	int Size = 0;

	cout << "\n\n\tEneter number of workers: ";

	cin >> Size;

	WorkerInfo *worker = new WorkerInfo[Size];

	string file = "Info.txt";

	ofstream info;

	info.open(file, ofstream::app);

	for (int i = 0; i < Size; i++)
	{
		cout << "\n\n\tEnter the name: ";
		cin >> worker[i].name;
		cout << "\n\n\tEnter tne surname: ";
		cin >> worker[i].surname;
		cout << "\n\n\tEnter the discription: ";
		cin >> worker[i].discription;
		cout << "\n\n\tEnter the post: ";
		cin >> worker[i].post;
		cout << "\n\n\tEnter the phone number: ";
		cin >> worker[i].phone;
		cout << "\n\n\tEnter the age: ";
		cin >> worker[i].age;
		cout << "\n\n\tEnter the number of work daays: ";
		cin >> worker[i].workdays;
		cout << "\n\n\tEnter the number of weekends: ";
		cin >> worker[i].weekends;
		cout << "\n\n\t";
		info << "\n\n\tName: " << worker[i].name << "\n\n\tSurname: " << worker[i].surname << "\n\n\tDiskription: " << worker[i].discription << "\n\n\tPost: " << worker[i].post << "\n\n\tPhone: " << worker[i].phone << "\n\n\tAge: " << worker[i].age << "\n\n\tWork days: " << worker[i].workdays << "\n\n\tWeekends: " << worker[i].weekends;
	}
	info.close();
}

void GetInfo()
{
	string file = "Info.txt";

	ifstream info;

	info.open(file);

	if (!info.is_open())
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tFile does not exit! Creat one before read it!";
		Sleep(3000);
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
		Sleep(1000);
		system("cls");
	}
	else
	{
		char ch;

		while (info.get(ch))
		{
			cout << ch;
		}
	}
}

void Menu()
{
	int MenuChoise = 0;

	cout << "\n\t\t\t\t\t\tVersion 0.1.0\t\t\t\t\tCreated by Calipso341" << "\n\n\tTo fill information about new employee, PRESS [1]. " << "\n\n\tTo delete an employee and info about him, PRESS [2]. " << "\n\n\tTo see information about all employees, PRESS [3]. " << "\n\n\tTo see information about direct employee, PRESS [4]. " << "\n\n\tTo exit, PRESS [0]. " << "\n\n\t\t\t\t\t\tManual\n\n\tWelcome to shortest manual ever!" << "\n\n\tFor moving in menu PRESS [desired] button, then PRESS [enter]. \n\n\tHooray, now you could move in menu!" << "\n\n\tYour choise: ";

	cin >> MenuChoise;

	if (MenuChoise == 1)
	{
		system("cls");
		FillInfo();
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tSaving info in file...";
		Sleep(1000);
		system("cls");
		Menu();
	}
	else if (MenuChoise == 3)
	{
		int Choise1 = 0;

		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
		Sleep(1000);
		system("cls");
		GetInfo();
		cout << "\n\n\tTo move back to menu, PRESS [1]" << "\n\n\tYour choise: ";
		cin >> Choise1;

		if (Choise1 == 1)
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
			Sleep(1000);
			system("cls");
			Menu();
		}
		else
		{
			system("cls");
			cout << "\n\n\tWrong button, you will automatically move to the menu...";
			Sleep(1000);
			system("cls");
			Menu();
		}
	}
	else if (MenuChoise == 0)
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tBye!";
		Sleep(1000);
		exit(0);
	}
	else
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tOpen your eyes and PRESS correct buttons!";
		Sleep(3000);
		system("cls");
		Menu();
	}
}

void Login(string log, string passwd, string log1, string passwd1)
{
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tTo enter the program, please, enter info below." << endl;
	cout << "\n\t\t\t\t\t\tEnter your login: ";
	cin >> log1;
	cout << "\n\t\t\t\t\t\tEnter your password: ";
	cin >> passwd1;

	if (log1 == log && passwd1 == passwd) {

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

int main()
{
	string log = "1";
	string passwd = "1";

	string log1;
	string passwd1;

	Login(log, passwd, log1, passwd1);

	system("pause");
	return 0;
}