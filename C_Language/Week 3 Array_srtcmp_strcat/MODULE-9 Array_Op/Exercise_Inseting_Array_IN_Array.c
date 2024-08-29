#include <stdio.h>
int main()
{
// Main Array index value and---------------------------------------------------:
    int N;
    scanf("%d", &N);

// Second Array index value , index number store ,which main array index change-:
    int m;
    scanf("%d", &m);
    int mod_ar[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &mod_ar[i]);
    }

// 3rd Array , Input Its a value of second array--------------------------------:
    int insert_array[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &insert_array[i]);
    }

// Main Array input value-------------------------------------------------------:

    int main_array[N + m];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &main_array[i]);
    }

// Operation : to shif the main array value-------------------------------------: 

    for (int i = 1; i <= m; i++)
    {
        for (int i = N + m; i >= mod_ar[1]; i--)

        {
            main_array[i] = main_array[i - 1];
        }
    }

// Operation : adding index_arr value , mod_ar index number of main array-------: 
    int j = 0;
    for (int i = mod_ar[0]; i <= mod_ar[m - 1]; i++)
    {
        main_array[i] = insert_array[j];
        j++;
    }

// Finall output of the Array value---------------------------------------------:
    for (int i = 0; i < N + m; i++)
    {
        printf("%d ", main_array[i]);
    }
    return 0;
    
}