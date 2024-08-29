#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;

    cout << min(a, b) << " "<< max(a,b) <<endl;

// for many variable min max;
    int p, q, s, t;
    cin >> p >> q >> s >> t;
    int my_min = min({p, q, s, t});
    int my_max = max({p, q, s, t});

    cout << my_min << " " << my_max <<endl;

}


