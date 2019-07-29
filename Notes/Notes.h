#pragma once
#include "Date.h"
#include <vector>
#include <algorithm>

struct Notes
{
	vector<Date> dates;

	Notes()
	{
		
	}
	void add(int day, int month, int year, string event)
	{
		dates.emplace_back(day, month, year, event);
	}
	void print(int day, int month, int year)
	{
		printf("Lvents for %.2d/%.2d/%d: \n", day, month, year);
		for (auto date : dates)
			if (date.day == day && date.month == month && date.year == year)
				date.print();
		printf("----------------------------\n");
	}
	void edit()
	{
		
	}
	void del()
	{
		
	}
};
