#include <iostream>
using namespace std;
class Date {
public:
    Date(int d = 1, int m = 1, int y = 1990);
    Date(const Date& oth);
    ~Date();
    void setDate(int d = 1, int m = 1, int y = 1800);
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
    int getDay() const {
        return day;
    }
    int getMonth() const {
        return month;
    }
    int getYear() const {
        return year;
    }
    void increaseDay();
    void compareDate(const Date& othDate);
    void displayDate();
    void tre();
private:
    int day, month, year;
    const int monthDays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
    const string monthString[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
};
Date::Date(int d, int m, int y) {
    setDate(d, m, y);
}
Date::~Date() {
    cout << "The date has been destroyed!" << endl;
}
Date::Date(const Date& oth) {
    day = oth.day;
    month = oth.month;
    year = oth.year;
    cout << endl << "The date has been copied to the target!" << endl;
}
void Date::setDay(int d) {
    if (d <= monthDays[month-1] && d > 0) {
        day = d;
    }
    else {
        day = 1;
    }
}
void Date::setMonth(int m) {
    if (m <= 12 && m > 0) {
        month = m;
    }
    else {
        month = 1;
    }
}
void Date::setYear(int y) {
    if (y >=1900) {
        year = y;
    }
    else {
        year = 1900;
    }
}
void Date::setDate(int d, int m, int y) {
    setMonth(m);
    setDay(d);
    setYear(y);

}
void Date::displayDate() {
    cout << day << " " << monthString[month -1] << " " << year << endl;
}
void Date::increaseDay() {
    if (day < monthDays[month - 1]) {
        day++;
    }
    else {
        day = 1;
        if (month < 12) {
            month++;
        }
        else {
            month = 1;
            year++;
        }
    }
}
void Date::compareDate(const Date& othDate) {
    long firstDay = year * 365 + month * 30 + day;
    long secondDay = othDate.year * 365 + othDate.month * 30 + othDate.day;
    if (firstDay > secondDay) {
        cout << "First date is later than second date!" << endl;
    }else if (firstDay < secondDay) {
        cout << "Second date is later than first date!" << endl;
    }
    else {
        cout << "The dates are same!" << endl;
    }
}
void Date::tre() {
    cout << endl << "-----------------------------------------------" << endl;
}
