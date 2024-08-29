#include <bits/stdc++.h>
using namespace std;
class MY_Class{
    public:
        int fast;
        int second;
        double theerd;
        MY_Class(int fast,int second, int theerd)
        {
            (*this).fast = fast;  // (this) হচ্ছে class student এর pointer, (*this) * দিয়ে  ক্লাসকে ডিরেফারেন্স করা হয়েছে;
            this->second = second;  // (*this) == ->
            this->theerd = theerd;
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