#include<stdio.h>
#include<string.h>
int count_v(char str[], int i){
    if(str[i] == '\0')
        return 0;
    int ans = count_v(str, i+1);

    if(str[i]>='A' && str[i]<='Z'){
        str[i] = str[i] + 32;
    }
    if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u'){
        return ans + 1;
    }
    else{
        return ans;
    }
}
int main(){

    char str[202];
    fgets(str, 202, stdin);
    int cnt = count_v(str, 0);
    printf("%d", cnt);

    return 0;
}


    
