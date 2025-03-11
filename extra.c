#include <stdio.h>
int main(){
    
    char operator;
    float num1,num2,result;
    printf("Enter an operator (+,-,*,/) : ", operator);
    scanf("%c", &operator);
    printf("Enter num1 : ", num1);
    scanf("%f", &num1);
    printf("Enter num2 : ", num2);
    scanf("%f", &num2);
    
    switch(operator){
        case '+' : 
           result = num1+num2;
           break;
        case '-' :
           result = num1-num2;
           break;
        case '*' : 
           result = num1*num2;
           break;
        case '/' :
          if(num2==0){
              printf("Divisible by zero not possible\n");
          }
          result = num1/num2;
          break;
        default :
            printf("invalid operator");
    }
    printf("Result %f\n", result);
    return 0;
}