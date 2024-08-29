#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    char c;

    cin >> a >>b >>c;
    cout << a << " " << b <<" "<< c <<endl;

//Normal Typecasting -----------
    int asci = c;
    cout << asci <<endl;

//Advance Typecasting -----------
    char alp = 'B';
    cout << int(alp) <<endl <<endl;

    int x = 10;
    long long int y = (long long int)(x); // data type length long hola bracket ;
//------------
    int m;
    char n;
    cin >> m >> n;
    cout << m << " "<< n <<endl;
    return 0;
}

/* input:

23 24 A
10
Z

*/