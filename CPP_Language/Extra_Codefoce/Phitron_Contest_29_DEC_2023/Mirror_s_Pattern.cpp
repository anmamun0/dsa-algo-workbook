#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <=N; i++)
    {
        if(i==1){
            for (int i = 1; i <=N; i++)
            {
                cout << i;
            }
            cout << endl;
        }
        else if(i==N){
            for (int i = N; i >= 1; i--)
            {
                cout << i;
            }
            cout << endl;
        }
        else{
            for (int j = 1; j <=N; j++)
            {
                if(j==1){
                    cout << i;
                }
                else if(j==N){
                    cout << N-i+1;
                }
                else{
                    cout << " ";
                }
            }
            cout << endl;
        }

    }
    
    

    return 0;
}