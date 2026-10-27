#include <stdio.h>
#include <string.h>

int isRotation(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
       if (len1 != len2) {
        return 0;
    }
    
char temp[100];
   
      strcpy(temp, str1);
    strcat(temp, str1);
    
      if (strstr(temp, str2) ) {
        return 1;
    }
    
    return 0;
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    if (fgets(str1, sizeof(str1), stdin) ) {
           str1[strcspn(str1, "\n")] = '\0';
    }
    
    printf("Enter second string: ");
    if (fgets(str2, sizeof(str2), stdin) ) {
          str2[strcspn(str2, "\n")] = '\0';
    }
    
    if (isRotation(str1, str2)) {
        printf("Output: Rotation");
    } else {
        printf("Output: Not rotation");
    }
    
    return 0;
}