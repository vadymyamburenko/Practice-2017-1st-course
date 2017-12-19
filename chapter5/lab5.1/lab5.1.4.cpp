#include <iostream>
using namespace std;
class ShopItemOrder
{
private:
string name;
double unitprice;
int number;
public:
void set(string n, double u, int num) {
name = n;
unitprice = u;
number = num;
}
string Name() {
return name;
}
double Price() {
return unitprice;
}
int Number() {
return number;
}
double GetTotal() {
return number*unitprice;
}
void Print()
{
	cout<< "you ordered "<< name<< " in number of "<<number<<endl<<"Its price is "<<unitprice<<endl;;
}

// Write your code here
};
int main() {
	ShopItemOrder k;
	k.set("lol", 2.,5);
	
	k.Print();
	cout<<"Total price of your order is "<<k.GetTotal()<<endl;
	return 0;
}