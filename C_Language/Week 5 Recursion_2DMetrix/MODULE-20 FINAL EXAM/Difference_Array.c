@AN.MAMUN
#include <stdio.h>
#include <string.h>
int main()
{

    int N;
    scanf("%d", &N);

    while (N--)
    {
        int element;
        scanf("%d", &element);

        int array[element], c_array[element];
        for (int i = 0; i < element; i++)
        {
            scanf("%d", &array[i]);
        }
// copy of array in array-----------------
        for (int i = 0; i < element; i++)                              
        {
            c_array[i] = array[i];
        }
// Copy array in ascending order--------------
        for (int i = 0; i < element - 1; i++)
        {
            for (int j = i + 1; j < element; j++)
            {
                if (c_array[i] > c_array[j])
                {
                    int temp = c_array[i];
                    c_array[i] = c_array[j];
                    c_array[j] = temp;
                }
            }
        }
// difference between arrary of element---------
        for (int i = 0; i < element; i++)
        {
            int sum = array[i] - c_array[i];
            if (sum < 0)
            {
                sum *= -1;
            }
            if (i != element - 1)
            {
                printf("%d ", sum);
            }
            else
            {
                printf("%d", sum);
            }
        }
        printf("\n");
    }

    return 0;
}