#include <stdio.h>
int main(){
    
    int i,num,sum = 0;

    printf("Enter num : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        sum += (i * i);
    }

    printf("sum of the series %d = %d\n", num,sum);
    return 0;

} 