#include<stdio.h>
int main(){
    int i,j,row;
    
    printf("Enter the number of row : ");
    scanf("%d", &row);

    for(i=row; i>0; i--){
        for(j=0; j<i; j++){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}