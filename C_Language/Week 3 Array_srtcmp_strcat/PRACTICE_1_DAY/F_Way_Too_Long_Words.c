#include<stdio.h>
#include<string.h>
int main(){

    int t;
    scanf("%d", &t);
    
    char s[101];

    // fgets(s, 101, stdin);
    // printf("%s", s);

    
    for (int i = 0; i < t;i++){
        scanf("%s", s);
        // printf("%s", s);
        int avg = strlen(s);
        if(avg<=10){
            printf("%s\n", s);
        }
        
        else{
            printf("%c%d%c\n", s[0], avg-2,s[avg-1] );
        }
    }
    return 0;
}