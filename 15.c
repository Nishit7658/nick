#include<stdio.h>
int main(){
    int i,j,row;
    char let = 'A';
    
    printf("Enter the number of from where you want to print : ");
    scanf("%d", &row);

    for(i=row; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("\n");

    for ( i = 5; i >= 1; i--){
        for (j = 0; j < i; j++){
            printf("%c ", let);
        }
        printf("\n");
        let++;
    }

    return 0;
}