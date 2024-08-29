#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int H, up, down;
        cin >> H >> up >> down;

        if (H <= up)
        {
            cout << 1 << endl;
        }
        else if (up > down)
        {

            int minL = H - up;
            int diff = up - down;
            int cal = ceil((minL * 1.0 / diff * 1.0));
            cout << cal*2 +1  << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    
    return 0;
}