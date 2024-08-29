#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;

    long long int val;
    Student(string name, long long int  val)
    {
        this->name = name;
        this->val = val;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.name > b.name)
        {
            return true;
        }
        else if (a.name < b.name)
        {
            return false;
        }
        else
        {
            if (a.val < b.val)
            {
                return true;
            }
            else{
                return false;

            }
        }
    }
};
int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;

    int  N;
    cin >> N;
    // cin.ignore();
   
        for (int i = 0; i < N; i++){
            string name;
        long long int  val;
        cin >> name >> val;
        Student obj(name, val);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().val << endl;
        // cout << pq.top().name[0]<<endl;
        pq.pop();
    }

   

        return 0;
}