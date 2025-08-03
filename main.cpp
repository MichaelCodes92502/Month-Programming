
#include <iostream>
using namespace std;

int main() {
    int month, year, days;

    //month verification
    do {
        cout << "Enter the month (1-12): ";
        cin >> month;
        if (month < 1 || month > 12)
            cout << "Invalid month. Try again and enter month 1-12." << endl;
    } while (month < 1 || month > 12);

    //year verification.
    cout << "Enter the year: ";
    cin >> year;

    //test leap year
    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    
    //display leap year status
    if (isLeapYear) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    //find days in month
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
            days = 31;
            break;
        case 4: case 6: case 9: case 11: 
            days = 30;
            break;
        case 2: 
            if (isLeapYear) 
                days = 29;
            else 
                days = 28;
            break;
        default: 
            days = 0;
    }

    //final output
    cout << "The month " << month << " in the year " << year << " has " << days << " days." << endl;
    
    return 0;
}
