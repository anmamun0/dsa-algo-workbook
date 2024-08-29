#include<stdio.h>
#include<limits.h>
int max_n(int ar[],int n,int i){
    if(i==n)
        return INT_MIN;
    int ans = max_n(ar, n, i + 1);
    if(ar[i]> ans){
        return ar[i];
    }
    else{
        return ans;
    }
}
int main(){

    int N;
    scanf("%d", &N);
    int ar[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
    }

    int ans = max_n(ar, N,0);
    printf("%d", ans);

    return 0;
}