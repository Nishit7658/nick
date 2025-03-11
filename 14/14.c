#include<stdio.h>
#define p printf
#define s scanf
int main(){
    int i,j,row;
    p("Enter row number : ");
    s("%d", &row);

    for(i=0; i<row;i++){
       for(j=0; j<=i; j++){
        p("* ");
       } 
       p("\n");
    }
}