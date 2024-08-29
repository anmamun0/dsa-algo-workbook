#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> num;
        for (int i = n; i >=1 ;i--)
        {
            num.push_back(i);
        }

        for (int i = 0; i < num.size()-1; i++)
        {
            if(i%2 == 1) continue;
            swap(num[i], num[i + 1]);
        }
        for(auto c:num)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}
