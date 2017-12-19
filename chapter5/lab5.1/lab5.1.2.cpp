#include <iostream>
#include <string>
using namespace std;
class Square
{
private:
double side, area;
public: 
void set_side(double value)
{
	if(value>0)
	{
	side = value;
	area = value*value;
	}
}
void print()
{
cout << "Square: side=" << side << " area="<< area << endl;
}
};
int main()
{
Square s;
s.set_side(2.0);
s.print();
s.set_side(-33.0);
s.print();
return 0;
}
