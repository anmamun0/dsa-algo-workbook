#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        int chack[26] = {0};

        string a, b;
        cin >> a >> b;

        for (char c : a)
        {
            int digit = int(c) - 97;
            // if (chack[digit] == 1)
            // {
            //     continue;
            // }
            chack[digit]++;
        }
        bool fast = true;
        for(char c:b){
            int digit = int(c) - 97;
            // if(chack[digit]>=1){
                chack[digit]--;
            // }
            // else if(chack[digit]== 0){
            //     fast = false;
            // }
           
        }
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if(chack[i] != 0){
                flag = false;
                break;
            }

            // if(chack[i]!=0){
            //     cout << chack[i] << " ";
            // }
        }
        (flag==true) ? cout << "YES" << endl : cout << "NO" << endl;
        // cout << endl;
    }

    return 0;
}