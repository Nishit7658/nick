#include <stdio.h>
int main(){
    int n,i;
    float sum = 0;

    printf("Enter how many number is there : ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++){
       
        printf("Erter your numbers : ");
        scanf("%d", &a[i]);

        sum = sum + a[i];
    }
    sum = sum/ (float)n;
    printf("Average : %f\n", sum);
    return 0;
}