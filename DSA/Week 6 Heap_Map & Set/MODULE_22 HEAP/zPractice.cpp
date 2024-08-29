#include <bits/stdc++.h>
using namespace std;
void insert_Heap(vector<int>v,int x){
    v.push_back(x);
    int current_idx = v.size() - 1;
    while (current_idx != 0)
    {
        int parent_idx = (current_idx - 1) / 2;
        if(v[parent_idx]<v[current_idx]){
            swap(v[parent_idx], v[current_idx]);
            current_idx = parent_idx;
        }
        else{
            break;
        }
    }
}
void delete_Heap(vector<int>&v){
    v[0] = v[v.size() - 1];
    v.pop_back();

    int cur_idx = 0;
    while (true)
    {
        int cur_left_idx = (cur_idx * 2) + 1;
        int cur_right_idx = (cur_idx * 2) + 2;
        int last_idx = v.size() - 1;

        if(cur_left_idx <=last_idx and cur_right_idx <= last_idx){
            // left and right child aca
            if(v[cur_left_idx] >= v[cur_right_idx] and v[cur_left_idx] > v[cur_idx] ){
                swap(v[cur_left_idx], v[cur_idx]);
                cur_idx = cur_left_idx;
            }
            else if(v[cur_right_idx] >= v[cur_left_idx] and v[cur_right_idx] > v[cur_idx]){
                swap(v[cur_right_idx], v[cur_idx]);
                cur_idx = cur_right_idx;
            }
            else{
                break;
            }
        }
        else if(cur_left_idx <= last_idx){
            // Just left ar ta aca
            if(v[cur_left_idx] > v[cur_idx]){
                swap(v[cur_left_idx], v[cur_idx]);
                cur_idx = cur_left_idx;
            }
            else{
                break;
            }
        }
        else if(cur_right_idx <= last_idx){
            // Just right child aca
            if(v[cur_right_idx]>v[cur_idx]){
                swap(v[cur_right_idx], v[cur_idx]);
                cur_idx = cur_right_idx;
            }
            else{
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
    

    return 0;
}