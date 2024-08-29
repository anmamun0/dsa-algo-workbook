#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;

    while (true)
    {
        int c;
        cin >> c;
        if(c == 0){
            int x;
            cin >> x;
            pq.push(x);     // O(logN)
        }
        else if(c ==1){
            pq.pop(); // O(logN)
            // it will delete Max value; -> like that Max Heap Stucture
        }
        else if(c ==2){
            cout << pq.top() << endl;   // o(1);
            // print max value like max heap
        }
        else{
            break;
        }
    }
    

    return 0;
}


/*
input:
0 20
0 10
0 5
2
2
1
2
3

output:
20
20
10

*/