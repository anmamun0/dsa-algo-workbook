#include <bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int r)
{
    int leftSize = m - l + 1;
    int rightSize = r-m;
    int L[leftSize], R[rightSize];

    int k = 0;
    for (int i = l; i <= m; i++)
    {
        L[k] = a[i];
        k++;
    }
    k = 0;
    for (int i = m + 1; i <= r; i++)
    {
        R[k] = a[i];
        k++;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // array, start,mid, end;
    merge(a, 0, 3, n - 1);

    return 0;
}