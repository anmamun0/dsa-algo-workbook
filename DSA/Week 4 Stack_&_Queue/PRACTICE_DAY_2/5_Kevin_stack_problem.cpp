#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	// Write your code here.
	stack<char>st;

	for(char c:s){
		st.push(c);
	}
	string newString;
	while(!st.empty()){
		newString += st.top();
		st.pop();
	}
	return newString;

}
