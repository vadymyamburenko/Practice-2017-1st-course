#include <iostream>
using namespace std;
int main(void){
	int   year, month, day, week;
	cout << "Enter a year ";
	cin >> year;
	cout << "enter month ";
	cin >> month;
	cout << "enter day ";
	cin >> day;
	month-=2;
	if(month<0){
		month+=12;
		year-=1;;
	}
	month = month*83/32;
	month+=day;
	month+=year;
	month= month + year/4;
	month= month -year/100;
	month = month +year/400;
	month %=7;
	week = month;
	cout << week;
	
	// Insert your code here
	return 0;
 
}