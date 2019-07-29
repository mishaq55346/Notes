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
	vector<Date> dates;
	sort(dates.begin(), dates.end());
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Что вы хотите сделать?\n EXIT - Выход из программы\n ADD - Добавить событие\n PRINT - Распечатать все события для данной даты\n EDIT - Редактировать события для данной даты\n DELETE - Удалить событие для данной даты\n");
	string choice;
	cin >> choice;
	while (choice != "EXIT") {
		handleChoice(choice);
		printf("EXIT - Выход из программы\n ADD - Добавить событие\n PRINT - Распечатать все события для данной даты\n EDIT - Редактировать события для данной даты\n DELETE - Удалить событие для данной даты\n");
		cin >> choice;
		system("cls");
	}
	//system("pause");
	return 0;
}

void handleChoice(string choice)
{
	if(choice == "ADD")
	{
		printf("Введите через пробел день, месяц, год(4х-значный) и событие\n");
		int day, month, year;
		string event;
		cin >> day >> month >> year;
		getline(cin, event);
		notes.add(day, month, year, event);
	}
	if(choice == "EDIT")
	{
		
	}
	if (choice == "PRINT")
	{
		printf("Введите через пробел день, месяц и год(4х-значный)\n");
		int day, month, year;
		cin >> day >> month >> year;
		notes.print(day, month, year);
	}
}