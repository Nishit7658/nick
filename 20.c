#include <stdio.h>
int main(){
    int n,i,num,count = 0;

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
    return 0;
}