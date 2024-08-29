#include<stdio.h>
int main(){

    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        char str[x + 1];
        scanf("%s", str);

        int P = 0 , T = 0;

        for (int i = 0; i < x; i++)
        {
            if(str[i]=='P'){
                P++;
            }
            else if(str[i]=='T'){
                T++;
            }
        }
        if(P>T){
            printf("Pathaan\n");
        }
        else if(P<T){
            printf("Tiger\n");
        }
        else if(P==T){
            printf("Draw\n");
        }
    }
    
    return 0;
}