#include <bits/stdc++.h>
using namespace std;
int main()
{   

    char str[100001];

    while (cin.getline(str, 100005))
    {
        int array[26]={0};

        int x = strlen(str);
        // cout << x << " " << str[1] - 97 << endl;
        for (int i = 0; i < x; i++)
        {
            int x = str[i] - 97;
            if(x>=0 && x<=26){
                array[x]++;
                // cout << x <<  " ";
            }
        }
        
        for (int i = 0; i <= 25; i++)
        {
            if(array[i]!=0){
                for (int j = 1; j <= array[i];j++){
                    cout << char(i + 97);
                }
            }
        }
        cout << endl;
    }

    return 0;
}