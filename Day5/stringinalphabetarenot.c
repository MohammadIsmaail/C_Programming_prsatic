#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a lowercase string: ");
    scanf("%s", str);

   
    for (i = 0; i < strlen(str) - 1; i++) {
        if (str[i] <= str[i + 1]) {
           
        } else {
            printf("The string \"%s\" is NOT in alphabetical order.\n", str);
            return 0;  
        }
    }

    
    printf("The string \"%s\" is in alphabetical order.\n", str);

   
}
