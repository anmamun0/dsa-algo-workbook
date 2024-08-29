#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    int chack = 1;
    int i = 0;
    int j = N-1;
    while (i<j)
    {
        if(a[i]!=a[j]){
            chack = 0;
            break;
        }
        i++;
        j--;
    }
    if(chack==1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    

    return 0;
}