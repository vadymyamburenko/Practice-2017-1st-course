#include <iostream>

using namespace std;


int main() {
	int a,b;

	cout<<"write a"<<endl;

	cin>>a;

	cout<<"write b"<<endl;

	cin>>b;

	int result = 1.0/(float)a==1.0/(float)b;

	if(result){

		cout<<"Results are equal(by 0.000001 epsilon)";

		
	}else{
 
		cout<<"Results are not equal(by 0.000001 epsilon)";

	}
	return 0;

}