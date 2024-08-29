#include <stdio.h>
#include <string.h>
int main()
{
    char str;
    char ans[1000001]= {0};;

    int i = 0;

    while (scanf("%c", &str) != EOF)
    {
            ans[i] = str;
            i++;
 
    }

    int count = 0;

    for (int j = 0; j < i -1; j++)
    {
        int digit = ans[j];
        int digit_2 = ans[j + 1];

        if ((digit >= 48 && digit <= 57) || (digit >= 65 && digit <= 90) || (digit >= 97 && digit <= 122))
        {
            if ((digit_2 >= 0 && digit_2 < 48) || (digit_2 > 57 && digit_2 < 65) || (digit_2 > 90 && digit_2 < 97) || (digit_2 > 122 && digit_2 < 127))
            {
                // printf("%c %c \n", digit, digit_2);
                count++;
            }
            
        }
    }

    printf("%d\n", count);

    return 0;
}