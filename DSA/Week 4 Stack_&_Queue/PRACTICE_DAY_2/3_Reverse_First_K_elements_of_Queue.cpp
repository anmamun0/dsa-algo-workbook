#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.

    stack<int>newSt;
    while(!q.empty() && k--){
        newSt.push(q.front());
        q.pop();
    }

    queue<int>newQ;
    while(!newSt.empty()){
        newQ.push(newSt.top());
        newSt.pop();
    }
    while(!q.empty()){
        newQ.push(q.front());
        q.pop();
    }
    return newQ;
}
