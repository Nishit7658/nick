#include<stdio.h>
int main(){
    
    int row,col,i,j;
    char n;

    printf("Enter any caracter : ");
    scanf("%c", &n);
    
    printf("Enter the amount of row : ");
    scanf("%d", &row);

    printf("Enter the number of column : ");
    scanf("%d", &col);

    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1){
               printf(" %c", n);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}