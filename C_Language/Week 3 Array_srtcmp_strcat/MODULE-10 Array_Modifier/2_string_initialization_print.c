#include <stdio.h>
int main()
{

    // char a[5] = {'M', 'a', 'm', 'u', 'n'};
    // char a[6] = {'M', 'a', 'm', 'u', 'n'}; //No gurantae

    char a[6] = "Mamun"; // stadard and gurantee
    // char a[6] = "Mamun\0";


    printf("%s", a);

    // for (int i = 0; i < 7; i++)
    // {
    //     printf("%c\n", a[i]);
    // }
    return 0;
}