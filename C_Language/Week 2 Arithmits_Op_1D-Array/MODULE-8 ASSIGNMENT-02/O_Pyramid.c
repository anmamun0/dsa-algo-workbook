#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);

    int array[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &array[i]);
    }
    int revers_array[N];
    for (int i = 0; i < N; i++)

    {   int count = (N-1)-i;
        revers_array[count] = array[i];
        // printf("%d ",revers_array[i]);
        // printf("%d. %d_ ",i, count);
    }

    int x,y;
    scanf("%d %d",&x, &y);

    for(int i=0; i<N;i++)
    {
        int last = (N-1)-x;
        if(i==last){
            revers_array[i]=y;
            printf("%d ",revers_array[i]);
        }
        else{
        printf("%d ",revers_array[i]);
        }
    }
   
    return 0;
}