#include<stdio.h>
int main(){
    
    int password =1999, n;
   
while (scanf("%d",&n)!=EOF)
{
    if(n==password){
        printf("Correct\n");
        break;
    }
    else{
        printf("Wrong\n");
    }
}
    return 0;
}