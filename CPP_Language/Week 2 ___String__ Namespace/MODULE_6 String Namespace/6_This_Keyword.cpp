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
        void hello(){
            cout << name << " " << age << endl;
        }
};
int main()
{
    Person mamun("AN Mamun", 18);
    Person asik("MD Ashik", 20);

    mamun.hello();

    return 0;
}