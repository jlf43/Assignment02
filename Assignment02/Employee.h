#pragma once
#include <iostream>
using namespace std;

class Employee
{ 
protected:
	string first;
	string last;
	string type;
	double hourlypay;
	double insurance;
	int years_worked;
public:
	// PURE VIRTUAL FUNCTIONS
	virtual void salary() const = 0;
	virtual void vaca() const = 0;
	virtual void health_care() const = 0;
	virtual void display() const = 0;

	void user_name()
	{
		cout << "Last name: ";
		cin >> last;
		cout << "First name: ";
		cin >> first;
		cout << endl;
	}
	void user_hourlypay()
	{
		cout << "What is your hourly rate?" << endl;
		cin >> hourlypay;
	}
	void user_insurance()
	{
		cout << "The company is partnered up with CS303 insurance company. We have different coverages from dental to vision. The amount of insurance costs from $0 - $5,000. How much are you looking for?" << endl;
		cin >> insurance;
		cout << endl;
	}
	void user_numYears()
	{
		cout << "How many years (for professional) or hours (for nonprofessional) have you been with the company?" << endl;
		cin >> years_worked;
		cout << endl;
	}	
};