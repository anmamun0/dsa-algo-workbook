#include <stdio.h>
#include<string.h>
int main()
{
    char alpha[100];
    scanf("%s", alpha);

    int cnt[26] = {0};
    for (int i = 0; i < strlen(alpha); i++)
    {
        int value = alpha[i] - 97;
        cnt[value]++;
    }

    for (int i = 0; i < strlen(alpha); i++)
    {
        int ans = alpha[i] - 97;
        if (cnt[ans] != 0)
        {
            printf("%c : %d\n", alpha[i], cnt[ans]);
            cnt[ans] = 0;
        }
    }
    return 0;
}



/*
//This is a to z sirialy print;
    for (int i = 0; i < 26 ; i++)
    {
        if(cnt[i] != 0){
        printf("%c : %d\n", i + 97, cnt[i]);
        }
    }
*/
/*
    for (int i = 0; i < strlen(alpha); i++)
    {
        int ans = alpha[i] - 97;

        printf("%c :  %d \n", alpha[i], cnt[ans]);
    }
*/

    


