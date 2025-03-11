#include <stdio.h>

int main() {
    float per;
    printf("Enter the percentage : ");
    scanf("%f", &per);

    if(per<=100 && per>=80){
        printf("Distinction %f\n", per);
    }
    else if(per<=79 && per>=60){
        printf("First Class %f\n", per);
    }
    else if(per<=59 && per>=40){
        printf("Second Class %f\n", per);
    }
    else if(per<40){
        printf("Fail %f\n", per);
    }

    return 0;
}