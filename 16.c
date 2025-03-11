#include <stdio.h>
int main(){
    int num,i,j,n,space;

    printf("Enter the number of row : ");
    scanf("%d", &num);

    for ( i = 0; i < num; i++){
      n = 1;
      for(space = 0; space <= num-i; space++){
        printf(" ");
      }
      for (j = 0; j <= i; j++){
        printf(" %d", n);
        n = n * (i - j) / (j + 1);
      }
      printf(" \n");
    }
    return 0;
}