#include <iostream>
using namespace std;

int main (){

  //month verification
  do {
    cout << "Enter the month: "; (1-12): "
    cin >> month;
    if (month < 1 || month > 12)
      cout << "Invalid month. Try again and enter month 1-12." << end
  } while (month < 1 || month > 12);

  //year verification
  cout <<"enter the year: ";"
    cin >> year;

  //test leap year
bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
  if (isLeapYear)
int days  }
}
//fins days in month
switch (month) 
  case 1: case 3: case 5: case 7: case 8: case 10: case 12: days = 31;
break; case 4: case 6: case 9: case 11: days = 30;
break;  case 2 if (isLeapYear) days = 29 : 28 
  break; default: days = 0 

  //final 

  cout << "The month " << month << " in the year " << year << " has " << days << " days." <<
  return 0;
}

  