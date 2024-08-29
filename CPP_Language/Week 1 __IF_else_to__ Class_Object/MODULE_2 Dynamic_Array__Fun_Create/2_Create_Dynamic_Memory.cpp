#include<bits/stdc++.h>
using namespace std;
int *fun(){
    int *a = new int;
    *a = 100;
    return a;
}

// int **fun2(){
//     int *a = new int;
//     *a = 100;
//     cout << &a << endl;
//     return &a;
// }



int main(){
    // int x = 100;
//------------------
    int *x = new int;
    *x = 100;
    cout << *x << endl;

    float *f = new float;
    *f = 1.12456746746745674;
    cout << *f << endl;
//---------------------------
    int *p = fun();
    cout << p << endl;
// //-------------------
//     int **y = fun2();
//     cout << y << endl;
    return 0;
}