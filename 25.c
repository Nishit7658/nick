#include <stdio.h>
int main(){
    int i,j,y,n;

    printf("Enter the number you want to array : ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++){
        printf("Enter the number a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                y = a[i];
                a[i] = a[j];
                a[j] = y;
            }
        }
    }

    printf("New array in ascending order is : ");
    for (i = 0; i < n; i++){
    printf("%d\n", a[i]);  
    }
    
    printf("\n");
    return 0;
}