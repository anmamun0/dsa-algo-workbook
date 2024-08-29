#include<stdio.h>
void fun(){
    printf("fun\n");
    fun(); // if i run this code . it will infiniti loop, so i need contrall recursion.
    
}
int main(){

    fun();
    return 0;
}