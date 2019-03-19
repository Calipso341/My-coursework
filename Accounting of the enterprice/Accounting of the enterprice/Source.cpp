#include<iostream>
#include<Windows.h>
#include<string>

void LogIn(string login, string passwrd, string log1, string passwrd1) {

	for (int i = 0; i < 3; i++)
	{
		cout << "\n\tAttempt to login number [ " << i + 1 << " ] " << "\n\tEnter your login: ";
		cin >> login;
		if (login == log1) {
			cout << "\n\tLogin is correct! Enter the password pleas: ";
		}
		cin >> passwrd;
		if (passwrd == passwrd1) {
			cout << "\n\tPassrword is correct!\n\tLogining is successful!";
		}
		else cout << "\n\tLoginin failed! Maybe login or password is wrong!" << endl;
	}

}

using namespace std;

int main() {

	string login = "Admin";
	string passwrd = "Admin123";
	string log1;
	string passwrd1;

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading..." << endl;
	Sleep(1000);
	system("cls");

	LogIn(login, passwrd, log1, passwrd1);

	system("pause");
	return 0;
}