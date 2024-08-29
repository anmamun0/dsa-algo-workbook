#include<stdio.h>
int main(){

    int N;
    scanf("%d", &N);
    int all_number[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &all_number[i]);
    }

// Maximaum value:
    int max = all_number[0];
    for (int i = 0; i < N; i++)
    {
        if(max < all_number[i]){
            max = all_number[i];
        }
    }   //printf("%d \n ", max);
// Maximaum value is 

    int count[7]= {0};
    for (int i = 0; i < N; i++)
    {

        int value = all_number[i];
        count[value]++;
        /*
        for (int j = 0; j < 7; j++){
            if(all_number[i]==j){
                count[j]++;
            }
        }
        */
            // if (all_number[i] == 0)
            // {
            //     count[0]++;
            // }
            // else if (all_number[i] == 1)
            // {
            //     count[1]++;
            // }
            // else if (all_number[i] == 2)
            // {
            //     count[2]++;
            // }
            // else if (all_number[i] == 3)
            // {
            //     count[3]++;
            // }
            // else if (all_number[i] == 4)
            // {
            //     count[4]++;
            // }
            // else if (all_number[i] == 5)
            // {
            //     count[5]++;
            // }
            // else if (all_number[i] == 6)
            // {
            //     count[6]++;
            // }
    }
    


    for (int i = 0; i <=6; i++)
    {
        printf("%d : %d\n", i, count[i]);
    }
    

    return 0;
}