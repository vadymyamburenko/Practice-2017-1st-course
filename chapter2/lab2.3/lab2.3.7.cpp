#include <iostream>
using namespace std;

int main() {
	int n=0;
	cin>>n;
	int x = 1;
	int y = 0;
	for (int i = 1; i < n; i++)
	{
		x += y;
		y = x - y;
	}
	cout<<x;

	return 0;
}