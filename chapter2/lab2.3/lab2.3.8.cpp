#include <iostream>
using namespace std;

int main() {
	int temp=0;
	cin>>temp;
	int fact=1;
	
            do
            {
                fact = fact * temp;
                temp = temp - 1;
            }
            while (temp > 1);
	cout<<fact;
	return 0;
}
