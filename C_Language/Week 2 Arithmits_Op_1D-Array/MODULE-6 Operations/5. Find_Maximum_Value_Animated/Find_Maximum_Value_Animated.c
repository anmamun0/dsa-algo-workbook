#include<stdio.h>
int main(){

    int N,i=0;
    scanf("%d",&N);
    int x ,storage=0;

    while (i<=N)
    {
        scanf("%d",&x);

        if(x>storage){
            storage = x;
        }
        i++;
    }
printf("%d ", storage);
    

    return 0;
}