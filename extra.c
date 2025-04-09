#include<stdio.h>
int main(){
    int i,j,row,space;

    printf("enter the number of row : ");
    scanf("%d", &row);

    for (i = 0; i <= space; i++){
        for (j = 0; j < i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}