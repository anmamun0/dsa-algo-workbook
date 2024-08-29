#include<stdio.h>
#include<string.h>
int main(){

    char str[1001];
    scanf("%s", str);
    int length = strlen(str);
    int find_word_length = 5;
    char final[length];

// Removing 'EGYPT' word
    for (int i = 0; i <= length+5; i++)//EGYPT
    {
        if (str[i]=='E' && str[i+1]=='G' && str[i+2]=='Y' && str[i+3]=='P' && str[i+4]=='T' )
        {
            str[i] = 0;
            str[i+1] = 0;
            str[i+2] = 0;
            str[i+3] = 0;
            str[i+4] = 0;
        }
    }
// Counting where are stat EGYPT (0) / (' '));
    int m = 0;
    int z[1001]={0};
    for (m; m < length; m++)
    {
        if(str[m]==0){
            z[m]++;
            m = m + 5;
        }
    }
 
    // Print alpabet with out EGYPT and here adding speace; 
    for (int i = 0; i < length; i++)
    {
        if (str[i] != 0)
        {
            printf("%c", str[i]);
        }
        if (z[i] != 0)
        {
            printf(" ");
        }
    }
    return 0;
}