#include <iostream>
using namespace std;

int main() {
    int month, year, days;

    // Ask the user for input
    cout << "Enter a month (1–12): ";
    cin >> month;

    // Input validation
    if (month < 1 || month > 12) {
        cout << "Invalid month. Please enter a number between 1 and 12." << endl;
        return 1; // Exit the program early
    }

    cout << "Enter a year: ";
    cin >> year;

    // Check how many days in the month
    if (month == 2) {
        // Check for leap year
        if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
            days = 29;
        } else {
            days = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }

    // Display result
    cout << days << " days" << endl;

    return 0;
}

