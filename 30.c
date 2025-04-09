#include <stdio.h>

// 1. Function with no arguments and no return value
void add1() {
    int a, b;
    printf("Enter two numbers (Type 1): ");
    scanf("%d %d", &a, &b);
    printf("Sum (Type 1): %d\n", a + b);
}

// 2. Function with arguments and no return value
void add2(int a, int b) {
    printf("Sum (Type 2): %d\n", a + b);
}

// 3. Function with no arguments but return value
int add3() {
    int a, b;
    printf("Enter two numbers (Type 3): ");
    scanf("%d %d", &a, &b);
    return a + b;
}

// 4. Function with arguments and return value
int add4(int a, int b) {
    return a + b;
}

int main() {
    int a, b, result;

    // Call 1st type
    add1();

    // Call 2nd type
    printf("Enter two numbers (Type 2): ");
    scanf("%d %d", &a, &b);
    add2(a, b);

    // Call 3rd type
    result = add3();
    printf("Sum (Type 3): %d\n", result);

    // Call 4th type
    printf("Enter two numbers (Type 4): ");
    scanf("%d %d", &a, &b);
    result = add4(a, b);
    printf("Sum (Type 4): %d\n", result);

    return 0;
}
