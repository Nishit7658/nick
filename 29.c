#include <stdio.h>
#include <string.h>
int main(){
    char str1[100],str2[100];
    int i = 0, j = 0;

    printf("Enter the string 1 : ");
    fgets(str1,100,stdin);

    printf("Enter the string 2 : ");
    fgets(str2,100,stdin);

    for (i = 0; str1[i] != '\0'; i++){
        if (str1[i] == '\n'){
            str1[i] = '\0';
            break;
        }
    }

    for (j = 0; str2[j] != '\0'; j++){
        if (str2[j] == '\n'){
            str2[j] = '\0';
            break;
        }
    }

    for ( j = 0; str2[j] != 0; j++,i++)
    {
        str1[i] = str2[j];
    }

    str1[i] != '\0';
    
    printf("Connected  string is : %s", str1);
    return 0;

}