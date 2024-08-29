#include<stdio.h>
int main(){

    int parcent, after_value;
    scanf("%d %d", &parcent, &after_value);
    float a = 100 - parcent;
    
    float formula = after_value * (100/a );

    printf("%0.2f", formula);
    return 0;
}