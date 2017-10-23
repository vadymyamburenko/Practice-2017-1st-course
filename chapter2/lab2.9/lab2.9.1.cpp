#include <iostream>
using namespace std;
int main(void) {
int vector1[7] = {4, 7, 2, 8, 1, 3, 0};
int vector2[7];
for(int a=0;a<7;a++)
{
    if(a==0)vector2[a]=vector1[6-a];
    else vector2[a]=vector1[a-1];
}
for(int i = 0; i < 7; i++)
cout << vector2[i] << ' ';
cout << endl;
return 0;
}