#include<stdio.h>
// global value; its access all function's.
int x = 5;

void fun(void){
    int s = 200;
    printf("Fun func s variable Memory address: %p\n", &s);

}
int main(){

    int s = 100;
    
    printf("Main func s variable Memory address: %p\n", &s);
    fun();

    return 0;
}