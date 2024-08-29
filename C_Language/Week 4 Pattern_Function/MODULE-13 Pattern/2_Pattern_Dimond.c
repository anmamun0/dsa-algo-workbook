// Reverse Dimond piramid

#include <stdio.h>
int main()
{

    int N, s, k;
    scanf("%d", &N);

    s = 0;
    k = N * 2 - 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        s++;
        k -= 2;
        printf("\n");
    }

    return 0;
}

/*
//  Dimond piramid

#include <stdio.h>
int main()
{

    int N, s, k;
    scanf("%d", &N);

    s = N - 1;
    k = 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        s--;
        k += 2;
        printf("\n");
    }

    return 0;
}
*/

/*
*********
 *******
  *****
   ***
    *
*/





/*
// fast my self
#include <stdio.h>
int main()
{
    int N, k = 1;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        for (int m = N - i; m > 0; m--)
        {
            printf(" ");
        }

        for (int j= 1; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");

    }

    return 0;
}
*/