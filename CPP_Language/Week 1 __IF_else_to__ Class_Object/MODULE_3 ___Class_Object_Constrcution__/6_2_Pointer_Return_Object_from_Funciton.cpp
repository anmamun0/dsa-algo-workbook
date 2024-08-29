#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int roll;
        int cls;
        double gpa;
        Student(int roll, int cls, double gpa)
        {
            this->roll = roll;
            this->cls = cls;
            this->gpa = gpa;
        }
};
Student * fun()
{
    Student jak(29, 3, 5.23);
    Student *p = &jak; // Static object return is wrong way. its right way is dinamic object return and , follow 7_2 file;
    return p;
}
int main()
{
    Student *ans = fun();
    cout << (*ans).roll <<"  "<< ans->cls <<"  "<<ans->gpa<< endl;
    return 0;
}