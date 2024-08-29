#include<stdio.h>
int main(){

    int i ;

    for(i= 1; i<=10 ;i+=1){

        printf("HEllO phitron;\n");
    }



// defferent of i++ and ++i; 
    int a=10;
    int b= 10;
    int x= a++;
    int y = ++b;
    printf("This is a %d \n",x);
    printf("This is b %d ", y);



    int count=0, n;
    for(n=1;n<=10;i++){
        count +=i;
        printf("%d,  ",i );
    }
    printf("== %d ",count);




}
/*

for(initial; condition ; increase)}
    statement;

*/

#include<stdio.h>
#include<stdbool.h>

While condition systext: 
/*
    while (testExpression) {
        // the body of the loop 
    }
*/
int main(){


    int i =1, a,b,c;

    while (i<= 5)
    {
        printf("%d \n", i);
        ++i;
    }
/*------------------------------------For Loop-----------------------------------------------*/
For loop condition syntext:
/*
    for (initializationStatement; testExpression; updateStatement)
    {
        // statements inside the body of loop
    }       
*/
int main(){

    int a;

    for (a=1;a<6; ++a){
        printf("for loop %d \n",a);
    }
}
/*--------------------------------------Do Loop-----------------------------------------------*/

Do Loop Conditon Syntext: 
/*  
    do {
        Work 
    }
    while (condition);
*/

int main(){

    double num, sum =0;

    do{
        printf("Enter a number: ");scanf("%lf", &num);
        sum += num;
    }
    while (num != 0.0);

    printf("Sum = %.2lf", sum);
}
/*----------------------------------------------------------------------------------------------*/

    return 0;
}