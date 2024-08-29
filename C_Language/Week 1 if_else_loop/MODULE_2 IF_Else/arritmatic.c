#include<stdio.h>
int main(){
    int a = 10, b =20;
    int add , min, mlt, mod;
    add = a+b;
    min= a-b;
    mlt = a*b;
    float div = b*1.0/a;
    mod = b%a;

    printf("This is += %d \n",add);
    printf("This is -= %d \n",min);
    printf("This is *= %d \n",mlt);
    printf("This is /= %f \n",div);
    printf("This is %%= %d \n",mod);

}
/*
Arritmatic Operator
+, - , * /, %
Assignement Operator
==
<=
>=
!=
<
>
Logical Operator:
|| = or
&& = and


*/