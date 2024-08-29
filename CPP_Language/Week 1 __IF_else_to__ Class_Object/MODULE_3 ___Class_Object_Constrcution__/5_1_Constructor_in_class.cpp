#include <bits/stdc++.h>
using namespace std;
class MY_Class{
    public:
        int fast;
        int second;
        double theerd;
        MY_Class(int f, int s, int t){
            fast = f;
            second = s;
            theerd = t;
        }

};

int main()
{
    MY_Class a(20, 100, 5.88);
    MY_Class b(100, 300, 4.5);

    cout << a.fast << " " << a.second << " " << a.theerd<<endl;
    cout << b.fast << " " << b.second << " " << b.theerd<<endl;

    return 0;
}