#include<stdio.h>
int main()
{int i,n,j;
 printf("Enter any number");
 scanf("%d",&n);   

 for(i=1 ; i<=n; i++)
 {
    for(j=1; j<=n; j++){
    printf(" * ");
    }
    printf("\n");
 }
 return 0;
}