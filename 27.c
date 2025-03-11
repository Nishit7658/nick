#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  
        }
    }

    printf("Uppercase String: %s\n", str);  

    return 0;
}
