#include<stdio.h>
int main(){
    int num;
    int first_digit;
    int last_digit;
    int sum;

    printf("Enter the number : ");
    scanf("%d", &num);

    last_digit = num%10;

    int temp = num;
    while(temp >= 10){
        temp /= 10;
    }
    first_digit = temp;

    sum = first_digit + last_digit;

    printf("First digit is %d\n", first_digit);
    printf("Last digit is %d\n", last_digit);
    printf("Sum of first and last digit is %d\n", sum);

    return 0;
}