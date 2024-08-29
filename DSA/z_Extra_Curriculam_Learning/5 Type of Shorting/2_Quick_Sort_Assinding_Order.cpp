#include <bits/stdc++.h>
using namespace std;
int partition(vector<int>&v,int start, int end){
    int pos = 0;
    for (int i = 0; i <= end; i++){
        if(v[i]<=v[end])
        {
            swap(v[pos], v[i]);
            pos++;
        }
    }
    return pos - 1;
}

void margeSort(vector<int>&v, int start , int end){
    if(start>=end)
        return;
    int pivod = partition(v, start, end);
    margeSort(v, start, pivod - 1);
    margeSort(v, pivod, end);
}

int main()
{
    int N;
    cin >> N;
    vector<int> v;
    while(N--){
        int x;
        cin >> x;
        v.push_back(x);
    }
    margeSort(v, 0, v.size() - 1);

    for(int c:v){
        cout << c << " ";
    }

    return 0;
}

// Avarage/Best Time Complexity = O(N*logN);
// Weast Case Complexity  = O(N^2); / weast case  when array will already sorted

// speace Complexity = O(logN);