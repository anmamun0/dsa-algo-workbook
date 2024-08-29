#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        string num;
        cin >> num;

        int count = 0;

        string sim;
        for (char c : num)
        {
            count++;
            if (count < 7)
            {
                sim += c;
            }
            if(count >15){
                break;
            }
        }
        // cout << sim << endl;
        bool flag = false;
        if (count == 14)
        {
            if (sim == "+88012" || sim == "+88013" || sim == "+88014" || sim == "+88015" || sim == "+88016" || sim == "+88017" || sim == "+88018" || sim == "+88019" )
            {
                flag = true;
            }
        }
       

        (flag == true) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}