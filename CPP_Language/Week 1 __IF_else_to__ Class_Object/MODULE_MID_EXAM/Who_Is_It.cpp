#include <bits/stdc++.h>
using namespace std;
class Mid_Exam
{
public:
    int Id;
    string Name;
    char Section;
    int Mark;
    Mid_Exam(int Id, string Name, char Section, int Mark)
    {
        this->Id = Id;
        this->Name = Name;
        this->Section = Section;
        this->Mark = Mark;
    }
};
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        Mid_Exam *Result[3];

        for (int i = 0; i < 3; i++)
        {
            int id, mark;
            string name;
            char section;

            cin >> id >> name >> section >> mark;
            getchar();

            // cout << id <<" "<< name << " "<<section <<" "<< mark <<endl;
            Result[i] = new Mid_Exam(id, name, section, mark);
        }

        if (Result[0]->Mark >= Result[1]->Mark && Result[0]->Mark >= Result[2]->Mark)
        {
            cout << Result[0]->Id << " " << Result[0]->Name << " " << Result[0]->Section << " " << Result[0]->Mark << endl;
        }
        else if (Result[1]->Mark >= Result[2]->Mark)
        {
            cout << Result[1]->Id << " " << Result[1]->Name << " " << Result[1]->Section << " " << Result[1]->Mark << endl;
        }
        else
        {
            cout << Result[2]->Id << " " << Result[2]->Name << " " << Result[2]->Section << " " << Result[2]->Mark << endl;
        }

        for (int i = 0; i < 3; i++)
        {
            delete Result[i];
        }
    }
    return 0;
}