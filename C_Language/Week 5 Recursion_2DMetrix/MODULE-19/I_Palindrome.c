#include<stdio.h>
#include<string.h>
int main(){

    char s[10001],t[10001];
    scanf("%s", s);
    strcpy(t, s);
    int len = strlen(s);

    int i = 0, j=len-1;
    while(i<j){
        int temp = t[i];
        t[i] = t[j];
        t[j] = temp;
        i++;
        j--;
    }
    if(strcmp(s,t)==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}