#include<stdio.h>
#include<string.h>
int main(){

    char str[10001];
    scanf("%s", str);
    int length = strlen(str);

    int count[26] = {0};

    for (int i = 0; i < length; i++)
    {
        int number = str[i] - 97;
        count[number]++;
    }
    for (int i = 0; i < 26; i++)
    {
        // int value = str[i]-97;
        if (count[i]!=0){  
            printf("%c - %d\n",i+97 ,count[i]);
        }
    }
    

    
    
    return 0;
}