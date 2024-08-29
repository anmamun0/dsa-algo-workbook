#include <bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        int mark1;
        int mark2;
        Person(string nm, int ag, int m1, int m2){
            name = nm;
            age = ag;
            mark1 = m1;
            mark2 = m2;
        }
        void hello(){
            cout << "hello inside of object"<<" "<< name;
        }
        int avg(){
            return mark1 + mark2;
        }
};
int main()
{
    Person mamun("AN Mamun", 18, 96, 100);
    mamun.hello();

    cout << endl << mamun.avg() << endl;
    return 0;
}
