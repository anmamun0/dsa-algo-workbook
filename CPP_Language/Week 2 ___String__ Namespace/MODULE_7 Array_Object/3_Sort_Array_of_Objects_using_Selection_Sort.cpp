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

    for (int i = 0; i < N-1; i++)
    {
        
        for (int j = i; j < N;j++){

            if(a[i].marks>a[j].marks){
                swap(a[i], a[j]);
            }

            if(a[i].marks == a[j].marks){
                if(a[i].roll>a[j].roll){
                    swap(a[i], a[j]);

                }
            }
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    
    return 0;
}