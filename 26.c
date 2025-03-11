#include <stdio.h>


int main() {
    char str[100];
    int length = 0, i;
    printf("Enter the string : ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++){
        length++;
    }
    printf("Length of the strin is : %d\n", length);
    return 0;
}
