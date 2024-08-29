#include<stdio.h>
#include<string.h>
void fun(char a[]){
       
    // int sz = sizeof(a) / sizeof(char);
    // printf("size   - %d\n", sz);
    printf("length -  %d\n", strlen(a));

}

int main(){
    char ar[60] = "Hello";
 
    fun(ar);

    return 0;
}