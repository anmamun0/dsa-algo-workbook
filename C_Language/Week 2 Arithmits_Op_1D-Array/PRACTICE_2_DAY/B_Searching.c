#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);

    int A[N];
    for(int i=0; i<N;i++){
        scanf("%d",&A[i]);
    }
    int X,ans =-1 ;
    scanf("%d",&X);

    for(int i=0; i<N;i++){
        if(A[i]==X){
            ans = i;
            break;
        }
    }
    printf("%d",ans);
    return 0;
}