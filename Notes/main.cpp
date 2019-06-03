#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include "Notes.h"

using namespace std;

void handleChoice(string choice);

Notes notes;

int main()
{	
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string choice;
	cin >> choice;
	while (choice != "EXIT") {
		handleChoice(choice);
	}
	system("pause");
	return 0;
}

void handleChoice(string choice)
{
	if(choice == "ADD")
	{
		int day, month, year;
		string event;
		cin >> day >> month >> year >> event;
		notes.add(day, month, year, event);
	}
	if(choice == "EDIT")
	{
		
	}
	if (choice == "PRINT")
	{
		int day, month, year;
		cin >> day >> month >> year;
		notes.print(day, month, year);
	}
}