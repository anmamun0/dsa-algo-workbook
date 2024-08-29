#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int Even=0, Odd=0, Positive=0, Negative=0;

    for (int i=1; i<=n;i++){
        int x;
        scanf("%d",&x);
        
        if(x%2==0 ){
            Even ++;    
        }
        else if (x%2 == 1 || x%2 == -1)
        {
            Odd ++;
        }
        if(x>0){
            Positive ++;
        }
        else if(x<0){
            Negative ++;
        }   
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",Even, Odd, Positive,Negative);

    return 0;
}