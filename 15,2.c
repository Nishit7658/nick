#include<stdio.h>
int main(){
    char i,j,let = 'A';

    for ( i = 5; i >= 1; i--){
        for (j = 0; j < i; j++){
            printf("%c", let);
        }
        printf("\n");
        let++;
    }
   return 0;
}