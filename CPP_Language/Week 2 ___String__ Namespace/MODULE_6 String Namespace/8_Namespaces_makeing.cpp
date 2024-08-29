#include <bits/stdc++.h>
using namespace std;

namespace Mamun
{
    int age = 18;
    void hello()
    {
        cout << "Mamun Namespace"<<endl;
    }
}

namespace Asik
{
    int age2 = 20;
    void hello2()
    {
        cout << "Asik Namespace" << endl;
    }
}

using namespace Mamun;
using namespace Asik;
int main()
{

    // cout << Mamun::age << endl;
    // Mamun::hello();

    cout << age << endl;
    hello();

    cout << age2 << endl;
    hello2();

    return 0;
}