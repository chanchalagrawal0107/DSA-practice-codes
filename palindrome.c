#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x){
    if(x < 0 || (x %10 == 0 &&x != 0)){
        return false;
    }
    int org = x;
    int rev = 0;
    
    while(x != 0){
        rev = rev * 10 + x % 10;
        x = x/10;
    }

    return org == rev;
}
int main(){
    int x = 121;

    if(isPalindrome(x))
        printf("True");
    else    
        printf("False");
    return 0;
}