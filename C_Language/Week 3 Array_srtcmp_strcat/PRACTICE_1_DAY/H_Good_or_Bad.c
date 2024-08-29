#include<stdio.h>
#include<string.h>
int main(){
    // printf("HWLLO WORLD");
    int N;
    scanf("%d", &N);
    char array[100001];
    int final = 0, last =0 ;

    for (int i = 0; i < N; i++)
    {
        scanf("%s", array);
        // printf("%s\n", array);

        int avg = strlen(array);
        // printf("%d ", avg);

        for (int i = 0; i < avg-1;i++){
            if(array[i]=='1' & array[i+1]=='0' || array[i]=='0' & array[i+1]=='1' ){
                final += 1;

            }
            

            else{
                break;
            }
        }
        // printf("%d %d\n", final,last);


        if(!final){
            printf("Bad\n");
        }
        else{
            printf("Good\n");
        }
    }
    
        
   
    return 0;
}