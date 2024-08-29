#include<stdio.h>
int main(){

    char str;
    int counter[26] = {0};

    while (scanf("%c",&str)!=EOF)
    {

        int value = str - 97;
        // printf("%d\n", value);

        counter[value]++;
    }

    char alpha[26]="abcdefghijklmnopqrstuvwxyz";
   

    for (int i = 0; i < 26; i++)
    {
        if(counter[i]>0){
        printf("%c : %d\n",alpha[i] ,counter[i]);
        }
    }

    return 0;
}
