#include<stdio.h>

int main(){
    int i,j,row,space;
    printf("Enter row number : ");
    scanf("%d", &row);

    for(i=0; i<row;i++){
       for(j=0; j<=i; j++){
        printf("* ");
       } 
       printf("\n");
    }

    printf("\n");

    for(i=1; i<=row; i++){
        for(space=1; space<=row-i; space++){
        printf("  ");
      }
      for(j=1; j<=i; j++){
        printf(" *");
      }
      printf("\n");
    }

    printf("\n");

    for(i=row; i>0; i--){
        for(j=0; j<i; j++){
            printf(" *");
        }
        printf("\n");
    }

    printf("\n");
    
    for(i=row; i>=1;i--){
        for(space=0; space<row-i;space++){
            printf("  ");
        }
       for(j=1; j<=i; j++){
        printf("* ");
       } 
       printf("\n");
    }

    return 0;

}