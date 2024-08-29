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
int main()
{
    // Student jak(29, 10, 4.99); // Static Object

    // Student *jak =  //new Student; if in class not constractor, then no need to use () ; //Dinamic Object

    Student *jak =  new Student(29, 10, 4.99);  // Dinamic Object

    cout << jak->roll << " " << jak->cls << " " << endl;

    return 0;
}