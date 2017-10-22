#include <iostream>
using namespace std;
int main(void) {
	int n =0;
do{
cout <<"write n  between 2 and 10"<<endl;
cin>> n;
}while(n<2 |n>10);
cout << '+';
for(int i = 0; i < n-2; i++)
cout << '-';
cout << '+' << endl;
for(int i = 0; i < n-2; i++) {
cout << '|';
for(int j = 0; j < n-2; j++)
cout << ' ';
cout << '|' << endl;
}
cout << '+';
for(int i = 0; i < n-2; i++)
cout << '-';
cout << '+' << endl;
return 0;
}
