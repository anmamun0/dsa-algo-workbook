#include <stdio.h>
#include <string.h>
int main()
{
    // printf("asdf");

    char array[1000001];
    scanf("%s", array);

    int avg = strlen(array) - 1;

    // printf("%s", array);
    int j = 0;
    int i = 0;
    // for (int i = 0; i <= avg; i++)
    // {
        
        for (int j = 0; j < avg; j++)
        {
            char store = array[i];
            if (store == array[j])
            {
                continue;;
            }
            else{
                printf("%c\n", store);
            }
            i++;
        }

        
    // }

    return 0;
}
