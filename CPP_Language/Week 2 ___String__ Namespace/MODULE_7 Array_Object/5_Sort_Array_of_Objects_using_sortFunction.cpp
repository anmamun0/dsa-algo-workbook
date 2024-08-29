#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student x, Student y)
{
    if(x.marks == y.marks){
        return x.roll < y.roll;
    }
    else{
        return x.marks < y.marks;
    }
    
    // if (x.marks < y.marks)
    // {
    //     return true;
    // }
    // else if(x.marks > y.marks){
    //     return false;
    // }
    // else{
    //     if(x.roll<y.roll){
    //         return true;
    //     }
    //     else{
    //         return false;
    //     }
    // }
}

/*
bool cmp(Student x, Student y){

    // if(x.marks<=y.marks){
    //     return true; // 
    // }
    // else{
    //     return false;
    // }
    return x.marks <= y.marks; // shortcut :আমি যা চাই এখানে তা লেখবো;

    // true means -> Not swap;
    // false means -> Swap;
}
*/

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

    sort(a, a + N,cmp);

    for (int i = 0; i < N; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    
    return 0;
}