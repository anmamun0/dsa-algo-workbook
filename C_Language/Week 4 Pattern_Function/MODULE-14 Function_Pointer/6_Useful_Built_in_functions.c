#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){

    double x;
    scanf("%lf", &x);
    // intput = 2.6;
    int ans1 = ceil(x); // output: 3;
    int ans2 = floor(x); // output: 2;
    int ans3 = round(x); // output: 3; ceil : <= 0.5
                                    // floor : > 0.5
 
    printf("%d\n", ans1);
    printf("%d\n", ans2);
    printf("%d\n", ans3);
    printf("--------------------------------------------\n\n");

    int y;
    scanf("%d", &y);

    double ans4 = sqrt(y);
    double ans5 = pow(y,y);
    // input : 2;
    printf("%lf\n", ans4); // squrt output: 2;
    printf("%lf\n", ans5); // power output: 256;



    printf("--------------------------------------------\n\n");

    int z;
    scanf("%d", &z);
    int ans6 = abs(z);
    // input: -101;
    printf("%d\n", ans6); // output : 101 ; its change nagitive value to positive value;

    return 0;
}