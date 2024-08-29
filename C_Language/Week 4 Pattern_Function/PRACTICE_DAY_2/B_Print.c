#include <stdio.h>
void range_print(int x)
{
   for (int i = 1; i <= x; i++)
    {

        if (i != x)
        {
            printf("%d ", i);
        }
        else{
            printf("%d", i);
        }
    }
}
int main()
{
    int user_input;
    scanf("%d", &user_input);

    if (user_input <= 1000)
    {
        range_print(user_input);
    }
    return 0;
}