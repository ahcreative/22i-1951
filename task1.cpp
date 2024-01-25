#include <iostream>
using namespace  std;
int main()
{
	int day = 0;
	int month = 0;
	int year = 0;
	cout << "Enter the Date in (dd/mm/yy) format: ";
	cin >> day ;
	if (day > 31) {
		cout << "Invalid Day. Enter Again: ";
		cin >> day;
	}
	cin >> month;
	if (month > 12) {
		cout << "Invalid Month. Enter Again: ";
		cin >> month;
	}
	cin >> year;
	cout << endl;
	cout << "Day : " << day <<endl;
	cout << "Month: " <<  month << endl;
	cout << "Year: " << year << endl;

}

