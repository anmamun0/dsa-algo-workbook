#include <bits/stdc++.h>
using namespace std;
class Students
{
public:
    string Name;
    int Cls;
    char Group;
    int Marks;
};
int main()
{
    int N;
    cin >> N;

    Students a[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i].Name >> a[i].Cls >> a[i].Group >> a[i].Marks;
    }

    int i = 0, j = N - 1;
    while (i < j)
    {
        swap(a[i].Group, a[j].Group);
        i++;
        j--;
    }

    for (int i = 0; i < N; i++)
    {
        cout << a[i].Name << " " << a[i].Cls << " " << a[i].Group << " " << a[i].Marks << endl;
    }

    return 0;
}