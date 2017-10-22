#include <iostream>
using namespace std;
int main(void){
	int   sys;
	float temp;
	float m, ft, in;
	cout << "Enter a system ";
	cin >> sys;
	cout << "enter value ";
	cin >> temp;
	if (sys == 1)
	{
		m = temp/3.2808;
		cout<<m << "m";
	}else if(sys==0)
	{
		ft = int(temp*3.2808);
		in = temp*3.2808;
		cout << (int)ft << "\'" << in << "\'\'"; 
	}else cout <<"error";
	
	// Insert your code here
	return 0;
	
}