#include <iostream>
using namespace std;

int main() {
int func=1;
int num1=1;
int num2=1;
while(func!=0){
cout << "Menu "<<endl;
cout <<"0 - exit"<<endl;
cout<<"1 - addition"<<endl;
cout<<"2 - substraction"<<endl;
cout<<"3 - multiplication"<<endl;
cout<<"4 - division"<<endl<<"Your choice?"<<endl;
cin >> func;
cin>>num1;
cin>>num2;
switch (func)
{
	case 0: cout << "GoodBye"<<endl;
	break;
	case 1: cout << num1 << " + " << num2 << " = " << num1+num2<<endl;
	break;
	case 2: cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
	break;
	case 3: cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
	break;
	case 4: cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
	break;
	default: cout<<"wrong input"<<endl;
	break;
}
}
	return 0;
}