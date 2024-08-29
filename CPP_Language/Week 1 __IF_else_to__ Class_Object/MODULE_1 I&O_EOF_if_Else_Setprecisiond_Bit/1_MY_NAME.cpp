#include <iostream>
// using namespace std;

int main(){
    int a = 10;
    long long int b = 10000000000;
    float c = 3.14;
    double f = 5.423452345;
    char g = 'A';

    // printf("%d \n%lld \n%f \n%lf \n%c", a,b,c,f,g); // C language

    std::cout << a <<"\n"<< b <<"\n"<< c <<"\n"<< f <<"\n"<< g <<"\n\n";

    // enld == \n 

    std::cout << a << std::endl
              << b << std::endl
              << c << std::endl
              << f << std::endl
              << g << std::endl
              << std::endl;

    std::cout << "Hello " << c << " World";
    return 0;
}

