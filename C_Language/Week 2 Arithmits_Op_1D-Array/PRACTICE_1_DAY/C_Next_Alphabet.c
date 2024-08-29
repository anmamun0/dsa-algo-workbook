#include<stdio.h>
int main(){

    char character;
    scanf("%c",&character);
    
    if (character==122){
        char hins ='a';
        printf("%c", hins);
    }
    else{
        char next_character = character +1;
        printf("%c",next_character);
    }
    return 0;
}