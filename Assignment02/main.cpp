#include <iostream>
#include "Employee.h"
#include "Nonprofessional.h"
#include "Professional.h"


using namespace std;

Employee* get_type()
{
	char type;
	cout << "Please enter 'P' for professional and 'N' for nonprofessional employee: " << endl;
	cin >> type;

	type = toupper(type);
	while (type != 'P' && type != 'N')
	{
		cout << "Invalid. Please try again. 'P' or 'N':" << endl;
		cin >> type;
		type = toupper(type);
	}

	if (type == 'P')
	{
		cout << "\nEmployment type: Professional employee\n" << endl;
		return new Professional();
	}
	else if (type == 'N')
	{
		cout << "\nEmployment type: Nonrofessional employee\n" << endl;
		return new Nonprofessional();
	}
	else
	{
		return NULL;
	}
}

int main()
{
	int x,y;
	cout << "Welcome to the main screen. How many people are you looking up today?" << endl;
	cin >> x;
	while (x <= 0)
	{
		cout << "Invalid number. Please enter a number again." << endl;
		cin >> x;
	}
	cout << endl;
	y = x;
	x = 0;
	while (x < y)
	{
		Employee* diff_type;
		diff_type = get_type();
		diff_type->user_name();
		diff_type->user_hourlypay();
		diff_type->salary();
		diff_type->user_insurance();
		diff_type->health_care();
		diff_type->user_numYears();
		diff_type->vaca();
		cout << endl;
		diff_type->display();
		x++;
	}	
}