#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        char name[100];
        int roll;
        double gpa;
};

int main()
{
    Student a,b;
    a.roll = 29;
    a.gpa = 4.89;
    // a.name = "Rakib"; //its not posible for clall
    char my_name[100] = "Rakib";
    strcpy(a.name, my_name);

    char your_name[100] = "Sakib";
    strcpy(b.name, your_name);
    b.roll = 45;
    b.gpa = 4.78;

    cout<< a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

//-------------------------------------------


    Student x,y;
    cin.getline(x.name, 100); //input: sakib all hasan
    cin >> x.roll >> x.gpa;

    getchar();
    cin.getline(y.name, 100);
    cin >> y.roll >> y.gpa;

    cout << x.name << " " << x.roll << " " << x.gpa << endl;
    cout << y.name << " " << y.roll << " " << y.gpa << endl;


    return 0;
}

/*

input:
sakib all hasan 
67 5.7
Rakib al safi 
3 4.4

*/