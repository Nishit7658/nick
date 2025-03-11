#include<stdio.h>
int main(){
    int i,j,row;
    
    printf("Enter the number of from where you want to print : ");
    scanf("%d", &row);

    for(i=row; i>=1; i--){
        for(j=1; j<=i; j++){
            printf(" %d", i);
        }
        printf("\n");
    }
    return 0;
}