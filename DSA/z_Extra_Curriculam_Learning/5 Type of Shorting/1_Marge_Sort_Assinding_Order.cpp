#include <bits/stdc++.h>
using namespace std;
void marge(vector<int> &v, int start, int mid, int end)
{
    vector<int> temp(end - start + 1);
    int index = 0;

    int left = start;
    int right = mid + 1;

    while (left <= mid and right <= end)
    {
        if (v[left] <= v[right])
        {
            temp[index] = v[left];
            index++;
            left++;
        }
        else
        {
            temp[index] = v[right];
            index++;
            right++;
        }
    }

    // left side arry have some element then
    while (left <= mid)
    {
        temp[index] = v[left];
        index++;
        left++;
    }
    while (right <= end)
    {
        temp[index] = v[right];
        index++;
        right++;
    }

    // sorted array put the main array
    index = 0;
    while (start <= end)
    {
        v[start] = temp[index];
        start++;
        index++;
    }
}
void margeSorting(vector<int> &v, int start, int end)
{
    if (start == end)
        return;

    int mid = start+(end-start) / 2;
    margeSorting(v, start, mid);
    margeSorting(v, mid + 1, end);
    marge(v, start, mid, end);
}
int main()
{
    int N;
    cin >> N;
    vector<int>v;
    while (N--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    margeSorting(v, 0, v.size()-1);

    for(int c:v){
        cout << c << " ";
    }

    return 0;
}

// Weast Case Time Complexity = O(N*logN);
// Speace Complexity = O(N);