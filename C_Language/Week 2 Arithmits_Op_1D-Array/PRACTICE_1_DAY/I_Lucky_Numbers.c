#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    int a,b;
    a = N%10;
    b = N/10;
    if(a%b==0 || b%a ==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
  
    return 0;
}