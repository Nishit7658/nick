#include <stdio.h>
int main(void){

    int i,n;
    float max, min, num[n];

    printf("Enter the number you want to store in array : ");
    scanf("%d", &n);

    for (i=0; i<n; i++){
        printf("Enter the Number:");
        scanf("%f", &num[i]);
    }


    max = num[0];
    min = num[0];

    for ( i=0; i<n; i++){
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