#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        int max_b = 0, min_b = n;
        vector<int> encrypted_values(q);

        for (int i = 0; i < q; ++i) {
            cin >> encrypted_values[i];

            int v = (encrypted_values[i] + max_b) % n;
            max_b = max(max_b, v);
            min_b = min(min_b, v);

            cout << (max_b | min_b) << " ";
        }

        cout << endl;
    }

    return 0;
}
