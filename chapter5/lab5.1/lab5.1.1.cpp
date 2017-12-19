#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
string name;
int age;
int iq;
};
void print(Person* person)
{
cout << person->name << " is " << person->age << " years old" << endl;
}
int main()
{
Person person;
person.name = "Harry";
person.age = 23;
person.iq=15;
cout << "Meet " << person.name;
print(&person);
person.name = "Edward";
cout << "no my name is" << person.name;
// Your code here
return 0;
}
