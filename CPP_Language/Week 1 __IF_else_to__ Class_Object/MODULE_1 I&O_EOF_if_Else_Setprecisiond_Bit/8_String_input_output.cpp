#include <iostream>
#include <string.h> //fgets(str,100,stdin);
#include <string> //getline(std,100);
using namespace std;
int main()
{
    int N;
    cin >> N;
    cout << N << endl;

    getchar();

    char str[100];

    // cin >> str;
    // fgets(str, 100, stdin);
    cin.getline(str, 100);
    

    cout << str;
}