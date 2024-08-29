#include <bits/stdc++.h>
using namespace std;
void H_N_Times(int value, char obj){
    int fastword = 1;
    while (value--)
    {
        if(fastword){
            fastword = 0;
        }
        else{
            cout << " ";
        }
        cout << obj;
    }
    cout << endl;
}
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int count;
        char object;
        cin >> count >> object;
        H_N_Times(count, object);  
    }
    return 0;
}