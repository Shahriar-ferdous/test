
/*
Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong-Yi
Assignment: Lab1D
This program asks the user to input the year and the month (1-12) and
 prints the number of days in that month (taking into account leap years)*/
#include <iostream>
using namespace std;

int main() {
    int month = 0;
    int year = 0;

    cout << "Enter year: ";
    cin >> year;

    cout << "Enter month: ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Invalid month input." << endl;
    } else {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            cout << "31 days" << endl;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            cout << "30 days" << endl;
        } else if (month == 2) {
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
                cout << "29 days" << endl;
            } else {
                cout << "28 days" << endl;
            }
        } else {
            cout << "Invalid month input." << endl;
        }
    }

    return 0;
}
