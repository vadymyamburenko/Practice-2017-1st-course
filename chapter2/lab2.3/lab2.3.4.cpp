#include <iostream>

using namespace std;
int main(void){
	int n;
	double number=1.;
	cin >> n;//
	for (int i = 0;i<n;i++)
	{
		
		number/=2;
	}
	cout.precision(20);
	cout << number << endl;
	return 0;
	
}