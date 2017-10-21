#include <iostream>

#include <iomanip>

using namespace std;


int main() {

	float first,second, third, fourth, fifth;

	first = 2.3;

	second = 2.3;

	third =2.123456;

	fourth = 2.123456;

	fifth=2.123456;

	cout <<first<<endl;

	cout <<fixed<<setprecision(2)<<second<<endl;

	cout <<fixed<<setprecision(6)<<third<<endl;

	cout <<fixed<<setprecision(2)<<fourth<<endl;

	cout <<(int)fifth;
	
return 0;

}