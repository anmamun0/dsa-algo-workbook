#include<stdio.h>
int main(){

    int N,k=1;
    scanf("%d", &N);

    for (int i = 1; i <=N; i++)
    {
        for (int j = 1; j <= k;j++)
        {
            printf("%d ", j);
        }
        k++;
        printf("\n");
        
    }
    return 0;
}


/*
//Reverse number pattern print

#include<stdio.h>
int main(){

    int N;
    scanf("%d", &N);
    int k = N;
    for (int i = 1; i <=N; i++)
    {
        for (int j = 1; j <=k ;j++){
            printf("%d ", j);
        }
        printf("\n");
        k--;
    }
    
    return 0;
}
*/

/*
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/