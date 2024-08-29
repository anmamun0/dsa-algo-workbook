#include<stdio.h>
#include<string.h>
int main(){

    char s[1001];
    scanf("%s", s);

    int avg = strlen(s) -1 ;
    int i = 0;
    int j = avg;
    int chack = 1;
    while(i<j){
        if(s[i]!=s[j]){
            chack = 0;
            break;
        }
        i++;
        j--;
    }
   if(!chack){
        printf("NO\n");
   }
   else{
        printf("YES");
   }

        return 0;
}