#include <iostream>
using namespace std;
int main(void){
	int year;
	string res;
	cout << "Enter a year: ";
	cin >> year;
	// Insert your code here
	if(year%4 != 0)
	res = "common";
	else if(year%100 != 0)
	res = "leap";
	else if (year%400 != 0)
	res = "common";
	else res = "leap";
	cout << res + " year";
	return 0;
	
}