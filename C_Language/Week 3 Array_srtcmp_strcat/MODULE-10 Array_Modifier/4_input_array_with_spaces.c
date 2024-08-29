#include<stdio.h>
#include<string.h>
int main(){

    char a[50];
    // scanf("%s", a);

    // gets(a); // for with space input
    fgets(a, 15, stdin);
    a[13] = '\0';

    printf("%s", a); 
    

    return 0;
}

/*
with spaces for input,
2 way here

1. gets();
2. fgets(array_name, array_index, stdin);
*/