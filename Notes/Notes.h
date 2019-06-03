#pragma once
#include "Date.h"
#include <vector>


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
		printf("%.2d/%.2d/%d events: \n", day, month, year);
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
