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
Student fun()
{
    Student jak(323, 3, 5.23);
    return jak;
}
int main()
{
    Student ans = fun();
    cout << ans.roll <<"  "<< ans.cls << endl;
    return 0;
}