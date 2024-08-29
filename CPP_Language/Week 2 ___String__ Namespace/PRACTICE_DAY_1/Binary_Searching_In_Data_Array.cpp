//--------------------------AN.MAMUN-----------------------------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int data[6] = {10, 20, 30, 40, 50, 60};

    int beg = 0, end = 6;
    int mid = (beg + end) / 2;
    int item = 40;

    while (beg <= end && data[mid] != item)
    {
        if (item < data[mid]){
            end = mid - 1;
        }
        else{
            beg = mid + 1;
        }

        mid = int((beg + end) / 2);
    }

    if (data[mid] == item){
        cout << "Item available" << item << " -> "<< data[mid] << endl;
    }
    else{
        cout << "NULL";
    }

    return 0;
}