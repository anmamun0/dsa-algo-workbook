#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int x;
        cin >> x;
        int array[x];
        int half = x / 2;

        int evern,odd;
        for (int i = 0; i < x; i++)
        {
            if(evern%2==0){
                evern++;
            }
            else{
                odd++;
            }
        }

        
        
    }
    

    return 0;
}