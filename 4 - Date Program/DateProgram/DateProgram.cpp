#include "Date.h"
int main()
{
	int day1, month1, year1;
	int day2, month2, year2;
	cout << "DATE 1" << endl;
	cout << " Day : ";
	cin >> day1;
	cout << " Month : ";
	cin >> month1;
	cout << " Year : ";
	cin >> year1;
	cout << "DATE 2" << endl;
	cout << " Day : ";
	cin >> day2;
	cout << " Month : ";
	cin >> month2;
	cout << " Year : ";
	cin >> year2;
	Date mainDate1(day1, month1, year1);
	Date mainDate2(day2, month2, year2);
	mainDate1.tre();
	cout << "DATE 1";
	mainDate1.tre();
	cout << "Day : " << mainDate1.getDay() << endl;
	mainDate1.tre();
	cout << "Month : " << mainDate1.getMonth() << endl;
	mainDate1.tre();
	cout << "Year : " << mainDate1.getYear() << endl;
	mainDate1.tre();
	mainDate1.displayDate();
	mainDate2.tre();
	cout << "DATE 2 ";
	mainDate2.tre();
	cout << "Day : " << mainDate2.getDay() << endl;
	mainDate2.tre();
	cout << "Month : " << mainDate2.getMonth() << endl;
	mainDate2.tre();
	cout << "Year : " << mainDate2.getYear() << endl;
	mainDate2.tre();
	mainDate2.displayDate();
	mainDate2.tre();
	mainDate1.compareDate(mainDate2);
	mainDate1.tre();
	cout << "The Days Between " << day1 << "/" << month1 << "/" << year1 << " And " << "1 Janruary " << (year1 + 1) << endl;
	mainDate1.tre();
	while (1) {
		mainDate1.displayDate();
		mainDate1.increaseDay();
		if (mainDate1.getYear() == year1+1) {
			break;
		}
	}
	mainDate2.tre();
	cout << "The Days Between " << day2 << "/" << month2 << "/" << year2 << " And " << "1 Janruary " << (year2 + 1) << endl;
	mainDate2.tre();
	while (1) {
		mainDate2.displayDate();
		mainDate2.increaseDay();
		if (mainDate2.getYear() == year2 + 1) {
			break;
		}
	}
	return 0;
}
