#include <stdio.h>
int main(){
    
 char a[100];
 char b[100];
   
 int i;

 printf("Enter the string : ");
 fgets(a,100,stdin);

 for (i = 0; a[i] != '\0'; i++){
    b[i] = a[i];
 }
 b[i] = '\0';
 
 printf("Copied string : %s", b);

}