#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    int ar[N];

    for (int i = 0; i < N; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < N-1; i++)
    {
        for (int j = i; j < N; j++)
        {
            if(ar[i]>ar[j]){
                swap(ar[i], ar[j]);
            }
        }
        
    }
    while (M--)
    {
        int x;
        cin >> x;

        int beg = 0, end = N - 1;
        int mid = (beg + end) / 2;

        while (beg<=end && ar[mid] != x)
        {
            if(x<ar[mid]){
                end = mid - 1;
            }
            else{
                beg = mid + 1;
            }
            mid = (beg + end) / 2;
        }
        
        if(ar[mid] ==x ){
            cout << "found" << endl;
        }
        else{
            cout << "not found"<<endl;
        }
        
    }
    


    // for (int i = 0; i < N; i++)
    // {
    //     cout << ar[i] << " ";
    // }
    
    
    

    return 0;
}