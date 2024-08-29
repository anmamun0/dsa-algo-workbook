#include<stdio.h>
#include<limits.h>
int main(){

    int N;
    scanf("%d",&N);
    if(N>=2){
        int array[N];
        for(int i=0; i<N;i++){
            scanf("%d",&array[i]);
        }

        int low = INT_MAX;
        for(int i=0; i<N; i++){
            if(array[i] < low){
                low = array[i];
            }
        }
// lowest value of this below.
        printf("%d ", low);

        for(int i=0; i<N;i++){
            if(array[i]==low){
                // The index number of the lowest value
                printf("%d", i+1);
                break;
            }
        }
    }
    return 0;
}