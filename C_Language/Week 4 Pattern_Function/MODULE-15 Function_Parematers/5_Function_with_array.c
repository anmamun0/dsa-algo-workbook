#include <stdio.h>
void fun(int a[], int n)  // int *a / int a[]
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    fun(array,5);
    return 0;
}

// you can 2 way receive array in function;
//1. void fun(int a[], int n ) {}
//2. void fun(int *a , int n ) {}