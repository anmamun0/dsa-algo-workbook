#include <bits/stdc++.h>
using namespace std;
class Students
{
public:
    string Name;
    int Cls;
    char Group;
    int Id;
    int Math_Mark;
    int English_Mark;
};
bool cmp(Students x, Students y)
{
    int x_total = x.English_Mark + x.Math_Mark;
    int y_total = y.English_Mark + y.Math_Mark;
    if (x_total == y_total)
    {
        return x.Id < y.Id;
    }
    else
    {
        return x_total > y_total;
    }
    // return x_total > y_total;
}
int main()
{
    int N;
    cin >> N;

    Students a[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i].Name >> a[i].Cls >> a[i].Group >> a[i].Id >> a[i].Math_Mark >> a[i].English_Mark;
    }
    sort(a, a + N, cmp);

    for (int i = 0; i < N; i++)
    {
        cout << a[i].Name << " " << a[i].Cls << " " << a[i].Group << " " << a[i].Id << " " << a[i].Math_Mark << " " << a[i].English_Mark << endl;
    }

    return 0;
}