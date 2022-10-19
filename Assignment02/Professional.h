#pragma once
#include "Employee.h"
#include <iostream>
#include <iomanip>

using namespace std;

class Professional : public Employee
{
public:
	// PROFESSIONAL EMPLOYEES GET PAID MONTHLY. THEY ALL WORK 40 HOURS EVERY WEEK WITH NO OVERTIME PAY (ASSUMING THAT THERE ARE 4 WEEKS IN A MONTH)
	void salary() const
	{
		cout << "You are earning a monthly salary. You earn $" << hourlypay * 160 << " a month." << endl << endl;
	}

	// THIS WILL DETERMINE THE NUMBER OF VACATION DAYS AN EMPLOYEE WILL RECIEVE. THERE ARE THREE GROUPS AND THEY DIFFER BY 3 DAYS. BUT WITHIN EACH GROUP, THERE IS A ONE DAY DIFFERENCE
	void vaca() const
	{
		if (years_worked <= 5)
		{
			cout << "You have " << years_worked + 5 << " vacation days!" << endl;
		}
		else
		{
			if (years_worked > 5 || years_worked <= 10)
			{
				cout << "You have " << years_worked + 8 << " vacation days!" << endl;
			}
			else if (years_worked > 10 || years_worked <= 15)
			{
				cout << "You have " << years_worked + 11 << " vacation days!" << endl;
			}
			else
			{
				cout << "You have " << years_worked + 20 << " vacation days!" << endl;
			}
		}
	}

	// FOR HEALTH CONTRIBUTION, THE COMPANY WILL PAY 75% OF THE INSURANCE FEE AND MAKE THE EMPLOYEE PAY 25%
	void health_care() const
	{
		cout << "Because you are a professional worker, we pay 75% of the insurance." << endl;
		cout << "You have to pay only $" << insurance * 0.25 << " annually for your insurance coverage." << endl << endl;
	}

	// THIS WILL DISPLAY ALL THE INFORMATION THE USER HAS INPUTED.
	void display() const
	{
		cout << setfill('-') << setw(35) << "-" << endl;
		cout << "OVERVIEW:" << endl << endl;
		cout << "NAME: " << last << ", " << first << endl;
		cout << "MONTHLY SALARY: $" << hourlypay * 160 << endl;
		cout << "INSURANCE: $" << insurance << ". But with the company's healthcare contribution, you save $" << insurance * 0.75 << " and you pay $" << insurance * 0.25 << " out of pocket annually." << endl;
		cout << "VACATION: ";
		vaca();
		cout << setfill('-') << setw(35) << "-" << endl;
		cout << endl;
	}
};