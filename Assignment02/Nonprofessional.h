#pragma once
#include "Employee.h"
#include <iostream>
#include <iomanip>
using namespace std;

class Nonprofessional : public Employee
{
public:

	void salary() const
	{
		cout << "You are earning an hourly salary. You earn $" << hourlypay << " an hour." << endl << endl;
	}
	void vaca() const
	{
		cout << "Your vacation hour is the number of hours you have worked: " << years_worked << " hours" << endl << endl;
	}
	void health_care() const
	{
		cout << "Because you are a nonprofessional worker, we pay 50% of your insurance." << endl;
		cout << "You have to only pay $" << insurance * 0.5 << " annually for your insurance coverage." << endl << endl;
	}
	void display() const
	{
		cout << setfill('-') << setw(35) << "-" << endl;
		cout << "OVERVIEW:" << endl << endl;
		cout << "NAME: " << last << ", " << first << endl;
		cout << "HOURLY RATE SALARY: $" << hourlypay << endl;
		cout << "INSURANCE: $" << insurance << ". But with the company's healthcare contribution, you save $" << insurance * 0.5 << " and you pay $" << insurance * 0.5 << " out of pocket annually." << endl;
		cout << "VACATION: ";
		vaca();
		cout << setfill('-') << setw(35) << "-" << endl;
		cout << endl;
	}
};