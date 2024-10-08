#include <iostream>
#include <string>
using namespace std;

struct stPerson
{
	string FirstName = "N/A";
	string LastName = "N/A";
	int Age = 0;
	string Phone = "N/A";
};

void ReadInfo(stPerson& Info)
{
	cout << "Enter first name :\n";
	cin >> Info.FirstName;

	cout << "Enter last name :\n";
	cin >> Info.LastName;

	cout << "Enter Age :\n";
	cin >> Info.Age;

	cout << "Enter Phone :\n";
	cin >> Info.Phone;

	cout << "\n\n*******************************\n\n";
}

void PrintInfo(stPerson Info)
{
	cout << "\n\n*******************************\n\n";

	cout << "First name :" << Info.FirstName << "\n";
	cout << "Last name :" << Info.LastName << "\n";
	cout << "Age :" << Info.Age << "\n";
	cout << "Phone :" << Info.Phone << "\n";

	cout << "\n\n*******************************\n\n";

}

void ReadPersons(stPerson Person[100] , int &length)
{
	cout << "How many persons do you want to enter?\n";
	cin >> length;

	for (int i = 0; i <= length - 1; i++)
	{
		cout << "Enter person " << i + 1 << "\n";
		ReadInfo(Person[i]);
	}
}

void PrintPersons(stPerson Person[100] , int length)
{
	for (int i = 0; i <= length - 1; i++)
	{
		PrintInfo(Person[i]);
	}
}

int main()
{
	int length;
	stPerson Persons[100];
	ReadPersons(Persons , length);
	PrintPersons(Persons, length);

	return 0;
}