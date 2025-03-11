#include<stdio.h>
#define p printf
#define s scanf
int main(){
    int i,j,row,space;
    p("Enter row number : ");
    s("%d", &row);

    for(i=row; i>=1;i--){
        for(space=0; space<row-i;space++){
            p("  ");
        }
       for(j=1; j<=i; j++){
        p("* ");
       } 
       p("\n");
    }
}