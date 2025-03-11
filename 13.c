#include<stdio.h>
#define p printf
#define s scanf
int main(){
    int num,a=0,b=1,c,i;
    p("Enter the number : ");
    s("%d", &num);
    p("Fibonacci series :%d",c);
    
    for(i=0;i<num;i++){
        p("%d ", a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}