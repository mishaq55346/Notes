#pragma once
#include <cmath>
#include <iostream>

using namespace std;

struct Date
{
	int year = -1;
	int month = -1;
	int day = -1;
	string event = "sobitie";
	Date()
	{
		
	}
	Date(int day, int month, int year, string event)//01
	{
		Date::year = year;
		Date::month =  (month == 0) ? ((month + 1) % 12) : (abs(month % 12));//��� ��������� ����������� ������, �� ������������ 12
		Date::day = (day) % getDaysInMonth(month);//��� ��������� ����������� ���, �� ������������ ���-�� ���� � ������
		Date::event = event;
	}

	int getDaysInMonth(int month)//������ 1 - �������� 1 �����, � �� 0�
	{
		int mas[12]
		{
			31, 28, 31, 30, 31, 30,
			31, 31, 30, 31, 30, 31
		};
		if ((month + 1 == 2) && (year % 4 == 0))//���� ��� ��������� ������� � ��������� ���������� ���
			return (mas[month + 1] + 1);
		return mas[month + 1];
	}

	void print()
	{
		printf("%.2d/%.2d/%d - %s.\n", day, month, year, event.c_str());
	}
};
