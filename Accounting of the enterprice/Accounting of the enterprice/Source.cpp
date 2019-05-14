#include<iostream>
#include<Windows.h>
#include<string>
#include<fstream>
#include<conio.h>

using namespace std;

class WorkerInfo
{
public:
	string name, surname, discription, post;
	long long int phone;
	int age, workdays, weekends;
};

void FillCash()
{
	int day, month, year, profit, sallary, lesion;

	string Money = "Money.txt";

	ofstream Cash;

	Cash.open(Money, ofstream::app);

	cout << "\n\n\tEnter day of month you want to fill info about: ";
	cin >> day;
	cout << "\n\n\tEnter month of year you want to fill info about: ";
	cin >> month;
	cout << "\n\n\tEnter year you want to fill info about: ";
	cin >> year;
	cout << "\n\n\tEnter amount of profit: ";
	cin >> profit;
	cout << "\n\n\tEnter amount of sallary: ";
	cin >> sallary;
	cout << "\n\n\tEnter amount of lesion: ";
	cin >> lesion;
	Cash << "\n\n\t::::::::::::::::::::::::::::::::::::::" << "\n\n\tDate: " << day << "." << month << "." << year << "\n\n\tProfit: " << profit << "\n\n\tSallary: " << sallary << "\n\n\tLesion: " << lesion;
	Cash.close();
}

void FillInfo()
{
	WorkerInfo worker;
	worker.name;
	worker.surname;
	worker.discription;
	worker.post;
	worker.phone;
	worker.age;
	worker.workdays;
	worker.weekends;

	int Size = 0;

	cout << "\n\n\tEneter number of workers: ";

	cin >> Size;

	string file = "Info.txt";

	ofstream info;

	info.open(file, ofstream::app);

	for (int i = 0; i < Size; i++)
	{
		cout << "\n\n\tEnter the name: ";
		cin >> worker.name;
		cout << "\n\n\tEnter tne surname: ";
		cin >> worker.surname;
		cout << "\n\n\tEnter the discription: ";
		cin.ignore();
		getline(cin, worker.discription);
		cout << "\n\n\tEnter the post: ";
		getline(cin, worker.post);
		cout << "\n\n\tEnter the phone number: (+380)";
		cin >> worker.phone;
		cout << "\n\n\tEnter the age: ";
		cin >> worker.age;
		cout << "\n\n\tEnter the number of work days: ";
		cin >> worker.workdays;
		cout << "\n\n\tEnter the number of weekends: ";
		cin >> worker.weekends;
		cout << "\n\n\t";
		info << "\n\n\t::::::::::::::::::::::::::::::::::::::\n\n\tName: " << worker.name << "\n\n\tSurname: " << worker.surname << "\n\n\tDiskription: " << worker.discription << "\n\n\tPost: " << worker.post << "\n\n\tPhone: " << "+" << 380 << worker.phone << "\n\n\tAge: " << worker.age << "\n\n\tWork days: " << worker.workdays << "\n\n\tWeekends: " << worker.weekends;
	}
	info.close();
}

void GetMoneyInfo()
{
	string Money = "Money.txt";

	ifstream Cash;

	Cash.open(Money);

	if (!Cash.is_open())
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
		char ch2;

		while (Cash.get(ch2))
		{
			cout << ch2;
		}
	}
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

void DeleteMoneyInfo()
{
	string Cash = "Money.txt";

	ofstream Money;

	Money.open(Cash);

	Money << " ";
	
	system("cls");

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";

	Sleep(1000);
}

void DeleteInfo()
{
	string Information = "Info.txt";

	ofstream Info;

	Info.open(Information);
		
	Info << " ";
		
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
	Sleep(1000);
}

void Menu()
{
	cout << "\n\t\t\t\t\t\tVersion 0.1.0\t\t\t\t\tCreated by Calipso341" << "\n\n\tTo fill information about new employee, PRESS [1]. " << "\n\n\tTo fill information about money, PRESS [2]." << "\n\n\tTo delete an employee and info about him, PRESS [3] - (Yet not working, still in progress). " << "\n\n\tTo see information about all employees, PRESS [4]. " << "\n\n\tTo see information about money, PRESS [5]. " << "\n\n\tTo see information about direct employee, PRESS [6] - (Yet not working, still in progress). " << "\n\n\tTo delete information about all emploees, PRESS [7]. " << "\n\n\tTo delete all information about money, PRESS [8]." << "\n\n\tTo exit, PRESS [0]. " << "\n\n\t\t\t\t\t\tManual\n\n\tWelcome to shortest manual ever!" << "\n\n\tFor moving in menu PRESS [desired] button.\n\n\tHooray, now you could use my program and move in menu!";

	while (true)
	{
		int MenuKey = _getch();

		if (MenuKey == 49)
		{
			system("cls");
			FillInfo();
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tSaving info in file...";
			Sleep(1000);
			system("cls");
			Menu();
		}
		else if (MenuKey == 50)
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
			Sleep(1000);
			system("cls");
			FillCash();
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tSaving info in file...";
			Sleep(1000);
			system("cls");
			Menu();
		}
		else if (MenuKey == 51)
		{

		}
		else if (MenuKey == 52)
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
			Sleep(1000);
			system("cls");
			GetInfo();
			cout << "\n\n\t::::::::::::::::::::::::::::::::::::::\n\n\tTo move back to menu, PRESS [1]" << "\n\n\tYour choise: ";
			while (true) {

				int InfoKey = _getch();

				if (InfoKey == 49)
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
		}
		else if (MenuKey == 53)
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
			Sleep(1000);
			system("cls");
			GetMoneyInfo();
			cout << "\n\n\t::::::::::::::::::::::::::::::::::::::\n\n\tTo move back to menu, PRESS [1]" << "\n\n\tYour choise: ";
			while (true)
			{
				int GetMoneyInfoKey = _getch();
				if (GetMoneyInfoKey == 49)
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
		}
		else if (MenuKey == 54)
		{
			system("cls");
			cout << "\n\n\tYet not working, still in progress...";
			Sleep(1000);
			system("cls");
			Menu();
		}
		else if (MenuKey == 55)
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
			Sleep(1000);
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t[1] - yes.\n\n\t\t\t\t\t\t[2] - no.";
			cout << "\n\n\t\t\t\t\t\tAre you sure that you want to delete all information about all emploees?\n\n\t\t\t\t\t\tYour choise: ";

			int DeleteKey = _getch();

			if (DeleteKey == 49)
			{
				DeleteInfo();
			}
			else if (DeleteKey == 50) 
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
				Sleep(1000);
			}
			system("cls");
			Menu();
		}
		else if (MenuKey == 56)
		{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
		Sleep(1000);
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t[1] - yes.\n\n\t\t\t\t\t\t[2] - no.";
		cout << "\n\n\t\t\t\t\t\tAre you sure that you want to delete all information about all money?";

		int DeleteKey = _getch();

		if (DeleteKey == 49)
		{
			DeleteMoneyInfo();
		}
		else if (DeleteKey == 50)
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading...";
			Sleep(1000);
		}
		system("cls");
		Menu();
		}
		else if (MenuKey == 48)
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tBye!";
			Sleep(1000);
			exit(0);
		}
		else
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tWrong button, PRESS correct buttons!";
			Sleep(3000);
			system("cls");
			Menu();
		}
	}
}

void Login()
{
	string login;
	string password;

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tTo enter the program, please, enter information below." << endl;
	cout << "\n\t\t\t\t\t\tEnter your login: ";
	cin >> login;
	cout << "\n\t\t\t\t\t\tEnter your password: ";
	cin >> password;

	string Info = "Login.txt";

	ifstream Login;

	string buflog;
	string bufpasswd;

	Login.open(Info);

	if (Login.is_open())
	{
		getline(Login, buflog);
		getline(Login, bufpasswd);
	}

	if (password == bufpasswd, login == buflog)
	{
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
	Login();

	system("pause");
	return 0;
}