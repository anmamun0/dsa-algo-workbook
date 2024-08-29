#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int N;
    cin >> N;

    Student a[N];
    for (int i = 0; i < N; i++)
    {
        cin.ignore();
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    Student mn;
    mn.marks = INT_MAX;

    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        //Min value finding

        if (a[i].marks < mn.marks)
        {
            mn = a[i];
        }

        //Max value finding
        if(a[i].marks> mx.marks){
            mx = a[i];
        }
    }
    cout<<"Maximum = " << mx.name <<" "<< mx.roll <<" "<< mx.marks<< endl;
    cout <<"Minimam = "<< mn.name <<" "<< mn.roll <<" "<< mn.marks<< endl;

    return 0;
}