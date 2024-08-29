#include <bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name, int age){
            // (*this).name = name;
            this->name = name;
            this->age = age;
        }
       
};
int main()
{
    Person* mamun = new Person("AN Mamun", 18);
    Person * asik = new Person("MD Ashik", 20);

    // mamun = asik;        //  Wrong way X
    // delete asik; 

    // mamun->name = asik->name;
    // mamun->age = asik->age;
    // delete asik;

    *mamun = *asik; // Right way
    delete asik;

    cout << mamun->name << " " << mamun->age << endl;

    return 0;
}