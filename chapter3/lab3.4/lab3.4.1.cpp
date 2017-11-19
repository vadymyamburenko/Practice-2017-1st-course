#include <iostream>

using namespace std;

bool isLeap(int year) {
	if (year % 4 != 0) return false;
	if (year % 100 != 0) return true;
	if (year % 400 != 0) return false;
	return true;
}

int main(void) {
	for (int year = 1995; year < 2017; year++)
		cout << year << " -> " << isLeap(year) << endl;
	return 0;
}