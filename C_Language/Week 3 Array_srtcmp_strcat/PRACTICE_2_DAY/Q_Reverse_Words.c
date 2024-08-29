#include<stdio.h>
#include<string.h>
int main(){

    char str[1000001];
    int firstWord = 1;
    while (scanf("%s",str)!=EOF)
    {
        // printf("%s\n", str);
        int length = strlen(str);
        int i = 0;
        int j = length-1;
        while (i<j)
        {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;
        }
        if (firstWord) {
            firstWord = 0;
        } else {
            printf(" "); // Add a space before each word, except the First word..
        }
        printf("%s", str);
    }
    return 0;
}