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
	printf("��� �� ������ �������?\n EXIT - ����� �� ���������\n ADD - �������� �������\n PRINT - ����������� ��� ������� ��� ������ ����\n EDIT - ������������� ������� ��� ������ ����\n DELETE - ������� ������� ��� ������ ����\n");
	string choice;
	cin >> choice;
	while (choice != "EXIT") {
		handleChoice(choice);
		printf("EXIT - ����� �� ���������\n ADD - �������� �������\n PRINT - ����������� ��� ������� ��� ������ ����\n EDIT - ������������� ������� ��� ������ ����\n DELETE - ������� ������� ��� ������ ����\n");
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
		printf("������� ����� ������ ����, �����, ���(4�-�������) � �������\n");
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
		printf("������� ����� ������ ����, ����� � ���(4�-�������)\n");
		int day, month, year;
		cin >> day >> month >> year;
		notes.print(day, month, year);
	}
}