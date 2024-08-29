#include <stdio.h>
#include <math.h>
int main()
{

    long long int A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    long long int fast = pow(A, B);
    long long int second = pow(C, D);
    long long int there = pow(B, A);
    long long int four = pow(D, C);
if(A>B && C>D){
    if (fast > second)
    {
        printf("YES");
    }
    else if (fast < second)
    {
        printf("NO");
    }
    else if (fast == second)
    {
        printf("NO");
       
    }
}
// if(A<B && C<D){
//     if (fast > second)
//     {
//         printf("NO");
//     }
//     else if (fast < second)
//     { 
//         printf("NO");
//     }
//     else if (fast == second)
//     {
//         printf("YES");
       
//     }
// }
    return 0;
}