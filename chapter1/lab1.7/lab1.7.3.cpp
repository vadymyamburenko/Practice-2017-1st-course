#include <iostream>

using namespace std;
int main() {

	int a,b,c,d;

	a=b=c=d=-1;

	while(a<0 || a>255){

	cout<<"write a"<<endl;

	cin>>a;

	}

	while(b<0||b>255){

	cout<<"write b"<<endl;

	cin>>b;

	}

	while(c<0||c>255){

	cout<<"write c"<<endl;

	cin>>c;

	}

	while(d<0||d>255){

	cout<<"write d"<<endl;

	cin>>d;

	}

	cout<<a<<"."<<b<<"."<<c<<"."<<d;

	return 0;

}