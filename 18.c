#include <stdio.h>
int main(void){

    int i;
    float max, min, num[10];
    for (i=0; i<10; i++){
        printf("Enter the Number:");
        scanf("%f", &num[i]);
    }


    max = num[0];
    min = num[0];

    for ( i=0; i<10; i++){
        if (num[i] > max){
            max = num[i];
        }
        if (num[i] < min){
            min = num[i];
        }
    }
    printf("Maximun number is : %f\n", max);
    printf("Minumum number is : %f\n", min);

    return 0;
}