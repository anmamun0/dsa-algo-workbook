#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    double a = 10.1241234;

    printf("%0.2lf\n", a);

    cout << a <<endl;

    cout << fixed << setprecision(3) << a <<endl;
    return 0;
}

/*
Output:

10.12
10.1241
10.124
*/







