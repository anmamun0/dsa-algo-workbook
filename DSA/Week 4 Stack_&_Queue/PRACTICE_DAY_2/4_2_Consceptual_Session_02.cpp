#include <bits/stdc++.h>
using namespace std;
vector<int>nextGreaterElement(vector<int>nums){
    stack<int> st;
    vector<int> res(nums.size(), -1);

    for (int i = 0; i < nums.size(); i++){
        while(!st.empty() and nums[i] > nums[st.top()]){
            res[st.top()] = nums[i]; // jodi stack ar top ar 
            //index ar value choto hy taial setar next element 
            //hocche nums ar element;
            st.pop();
        }
        st.push(i); // index push kortechi;
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<int> res = nextGreaterElement(v);
    for (int i:res){
        cout << i << endl;
    }

        return 0;
}