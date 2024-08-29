#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int mark;
};

int main()
{
    int N;
    cin >> N;
    Student a[N];

    // Student a[N]; // Static Object Array
    // Student *a = new Student[N]; // Dinamic Object Array
    // int *a = new int[N]; //Static Normal Array

    for (int i = 0; i < N; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].mark;
    }

    for (int i = 0; i < N; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
    }
    
    


    return 0;
}

/*
Input:
3
Mamun Hasan
10 99
Asik Hasan
11 95
Sakib Hasan
12 85
*/