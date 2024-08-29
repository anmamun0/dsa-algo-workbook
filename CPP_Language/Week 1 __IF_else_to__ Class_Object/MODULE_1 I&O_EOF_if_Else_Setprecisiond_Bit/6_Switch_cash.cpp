#include<iostream>
using namespace std;
int main(){
    int x = 3;

    switch(x){
        case 1:     // if(x==1)
            cout << "One" << endl;
            break;
        case 2:     // if(x==2)
            cout << "Two" << endl;
            break;
        case 3:     // if(x==3)
            cout << "Three" << endl;
            break;
        case 4:
            cout << "Four" << endl;
            break;
        case 5:
            cout << "Five" << endl;
            break;
        default:
            cout << "Kicu mila nai";
    }
    return 0;
}