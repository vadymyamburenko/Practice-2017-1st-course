#include <iostream>
using namespace std;
int main(void){
	float grossprice, taxrate, netprice, taxvalue;
	cout << "Enter a gross price: ";
	cin >> grossprice;
	if (grossprice<0)
	{
		cout<<"error";
	}
	cout << "Enter a tax rate: ";
	cin >> taxrate;// Insert you code here
	if (taxrate<0 || taxrate>100)
	{
		cout<<"error";
	}
	netprice = grossprice/(1+taxrate/100.0);
	taxvalue = grossprice - netprice;
	cout << "Net price: " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;
	return 0;
}