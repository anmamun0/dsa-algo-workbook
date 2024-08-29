#include<stdio.h>
#include<string.h>
int main(){

    char S[1000001];
    fgets(S, 1000001, stdin);

    // int i = 0;
   for (int i = 0; S[i] != '\\'; i++)
   {
       printf("%c", S[i]);
   }
   

    

    return 0;
}