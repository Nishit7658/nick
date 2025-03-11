#include<stdio.h>
int main() {
    int num1, num2, num3, temp;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    temp = num1;
    num1 = num2;
    num2 = num3;
    num3 = temp;
    
    printf("After swapping: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);
    return 0;
}
