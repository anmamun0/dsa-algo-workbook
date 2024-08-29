#include<stdio.h>
#include<string.h>
int main(){

    char str[1000001];
    scanf("%s", str);

    int length = strlen(str);

    char username[1001];
    char pwd[1001];
    char profile[1001];
    char role[1001];
    char key[1001];


    for (int i = 0; i < length; i++)
    {
        char a = str[i];
        char b = str[i+1];
        char c = str[i+2];
        char d = str[i+3];
        char e = str[i+4];
        char f = str[i+5];
        char g = str[i+6];
        char h = str[i+7];
        if(a =='u' && b =='s' && c =='e' && d =='r' && e =='n' && f =='a' && g =='m' && h =='e')
        {
            
        }

    }
    
    return 0;
}