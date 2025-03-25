#include<stdio.h>
#define p printf
#define s scanf
int main(){
    long long int num,a=0,b=1,c,i;

    p("Enter the number : ");
    s("%lld", &num);
    p("Fibonacci series : ");
    
    for(i=0; i < num; i++){
        p("%lld ", a);
        c = a+b;
        a = b;
        b = c;
    }

    p("\n");
    return 0;
}