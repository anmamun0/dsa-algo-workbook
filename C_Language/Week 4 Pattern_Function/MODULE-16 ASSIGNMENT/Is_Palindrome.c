#include<stdio.h>
#include<string.h>
int is_palindrome(char str[]){
    int length = strlen(str);
    int chack=1;

    int i = 0;
    int j = length-1;
    while (i<j)
    {
        if(str[i]!=str[j]){
            chack = 0;
        }
        
        i++;
        j--;

    }
    return chack;
}
int main(){

    char string[1005];
    scanf("%s", string);

    int result = is_palindrome(string);
    if(result==1){
        printf("Palindrome");
    }
    else{
        printf ("Not Palindrome");
    }
    
    return 0;
}