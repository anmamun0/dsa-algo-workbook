#include<iostream>
using namespace std;
int main()
{
    int a, b;
    
// C language
    // while (scanf("%d %d",&a,&b) != EOF)
    // {
    //     printf("%d %d\n", a, b);
    // }

// No need to use EOF in c++, its auto undastrand this
    while(cin>>a>>b){
        cout << a << " " << b <<endl;
    }
    

    return 0;
}


/*
input:
10 20
30 40
40 60
*/