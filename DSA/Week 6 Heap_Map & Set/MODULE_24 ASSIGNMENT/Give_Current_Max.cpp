#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    string name;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks)
        {
            return true;
        }
        else if (a.marks > b.marks)
        {
            return false;
        }
        else
        {
            if (a.roll > b.roll)
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    int N;
    cin >> N;

    priority_queue<Student, vector<Student>, cmp> pq;

    while (N--)
    {
        string name;
        int roll, marks;

        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    int T;
    cin >> T;
    while (T--)
    {
        int com;
        cin >> com;
        if (com == 0)
        {
            string name;
            int roll, marks;

            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);

            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (com == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (com == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {

                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}