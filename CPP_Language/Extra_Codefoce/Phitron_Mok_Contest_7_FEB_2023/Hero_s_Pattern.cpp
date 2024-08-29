#include <bits/stdc++.h>
using namespace std;
int main()
{
    //AN.Mamun Approch
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int x = n, y = 0;
    for (int i = 1; i <=n*2-1; i++)
    {
        
        for (int j = 1; j<x; j++) cout << " ";
        for (int j = 1; j<=x; j++) cout << '*'; //star printing

        for (int j = 1; j<=y; j++) cout << " ";
        for (int j = x; j >=1; j--) cout << '*'; //star printing
        cout << endl;

        if(i<n)
            x--,y +=4;
        else
            x++,y -=4; 
    }
    
    return 0;
}