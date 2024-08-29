#include <stdio.h>
void Digits(int val)
{
    if (val == 0)
        return;
    int result = val%10;

    Digits(val /10);
    printf("%d ", result);
}
int main()
{

    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int val;
        scanf("%d", &val);
        Digits(val);
        if(val == 0){
            printf("0");
        }
        printf("\n");
        
    }

    return 0;
}