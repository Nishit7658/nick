#include <stdio.h>
int main(){
    int n,i,num,count = 0,new_num;

    printf("Enter the number you want to store in array : ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++){
        printf("Enter %d number : ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter the number you want to occurrence : ");
    scanf("%d", &num);

    for ( i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
             count ++;
        }
        
    }
    printf("Number %d is occurred %d time. \n", num,count);
    
    printf("Enter the number you want to replace : ");
    scanf("%d", &num);

    printf("Enter the number you want to replace with : ");
    scanf("%d", &new_num);

    for (i = 0; i < n; i ++){
        if ( a[i] == num){
            a[i] = new_num;
        }
    }

    for (i = 0; i < n; i++){
        printf("%d", a[i]);
        printf("\n");
    }

    return 0;
}