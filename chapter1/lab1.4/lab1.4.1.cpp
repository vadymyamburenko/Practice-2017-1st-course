#include <iostream>

using namespace std;

int main(void) {

float pi = 3.14159265359;

float x,y;

cout << "Enter value for x: ";

cin >> x;

y = x*x/(pi*pi*(x*x+1.0/2.0))*(1+x*x/(pi*pi*(x*x-1.0/2.0)*(x*x-1.0/2.0)));

cout << "y = " << y;

}