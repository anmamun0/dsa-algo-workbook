#include<stdio.h>
#include<string.h>
void length_str(char *str){
    printf("%d", strlen(str));
}

int main(){

    char string[1000];
    scanf("%s", string);

    length_str(string);

    return 0;
}