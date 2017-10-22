#include <iostream>

using namespace std;

int main(void) {
    int number=0;
    int counter=0;
    do
    {
      cout<<"Enter positive number:"<<endl;
      cin>>number;
    }while(number<=0);
    while(number!=1){
    	if(number%2==0)
    	{
    	   number/=2;
    	}else
    	{ 
    	   number =3*number+1;
    	}
    	cout<<number<<endl;
    	counter++;
    }
    cout<<"Steps "<<counter;
    return 0;
}