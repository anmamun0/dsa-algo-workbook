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

    if (x.English_Mark == y.English_Mark)
    {
        if (x.Math_Mark == y.Math_Mark)
        {
            return x.Id < y.Id;
        }
        else
        {
            return x.Math_Mark > y.Math_Mark;
        }
    }
    else
    {
        return x.English_Mark > y.English_Mark;
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