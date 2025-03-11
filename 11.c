#include<stdio.h>
#define p printf
#define s scanf 
int main(){
    long long int num,rev=0,rem=0,b;
    p("enter number : ");
    s("%lld", &num);
    b = num;
    while(num != 0){
        rem = num%10;
        rev = rev*10 + rem;
        num /= 10;
        
    }
    if(b == rev){
        p("%lld is palindrome \n", b);
    }else{
        p("%lld is not plaindrome \n", b);
    }
    return 0;
    
}