#include <bits/stdc++.h>
using namespace std;
void insert_Heap(vector<int>&v, int x) // 1 time complexity O(logN) and N time Complexiyt O(NlogN)
{
    v.push_back(x);
    int current_idx = v.size() - 1;
    while (current_idx != 0)
    {
        int parent_idx = (current_idx - 1) / 2;
        if(v[parent_idx]< v[current_idx])
            swap(v[parent_idx], v[current_idx]);
        else
            break;
        current_idx = parent_idx;
    }
    
}
void delete_Heap(vector<int>&v)  // 1 time complexity O(logN) and N time Complexiyt O(NlogN)
{
    v[0] = v[v.size() - 1];
    v.pop_back();

    int cur_idx = 0;
    while(true){

        int cur_left_idx = cur_idx * 2 + 1;
        int cur_right_idx = cur_idx * 2 + 2;
        int last_idx = v.size() - 1;

        if(cur_left_idx <= last_idx and cur_right_idx <= last_idx)
        {
            // 2 o tai aca;
            if(v[cur_left_idx] >= v[cur_right_idx] and v[cur_left_idx]> v[cur_idx] )
            {
                swap(v[cur_left_idx], v[cur_idx]);
                cur_idx = cur_left_idx;
            }
            else if(v[cur_right_idx]>=v[cur_idx] and v[cur_right_idx] > v[cur_idx]){
                swap(v[cur_right_idx], v[cur_idx]);
                cur_idx = cur_right_idx;
            }
            else{
                break;
            }
        }
        else if(cur_left_idx <= last_idx){
            // Just left acha

            if(v[cur_left_idx]> v[cur_idx])
            {
                swap(v[cur_left_idx], v[cur_idx]);
                cur_idx = cur_left_idx;
            }
            else
            {
                break;
            }
        }
        else if(cur_right_idx <= last_idx){
            //just right acha
            if(v[cur_right_idx] > v[cur_idx])
            {
                swap(v[cur_right_idx], v[cur_idx]);
                cur_idx = cur_right_idx;
            }
            else
            {
                break;
            }
        }
        else{
            break;
        }
    }
}

void Print_Heap(vector<int>&v)
{
    for(int val:v)
    {
        cout << val << " ";
    }
    cout << endl;

}
int main()
{
    vector<int> v;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        insert_Heap(v, x);
    }

    // for(int c:v){
    //     cout << c << " ";
    // }

    Print_Heap(v);

    delete_Heap(v);
    Print_Heap(v);

    delete_Heap(v);
    Print_Heap(v);


    return 0;
}

/*
input:
7
30 20 25 15 5 6 3


output:
30 20 25 15 5 6 3 
25 20 6 15 5 3 
20 15 6 3 5 

*/