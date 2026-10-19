
#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    int start = 0;
    
    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int end = i - 1;
            
            for (int k = start; k < end; k++, end--) {
                char temp = str[k];
                str[k] = str[end];
                str[end] = temp;
            }
            
            start = i + 1;
        }
        
        if (str[i] == '\0') {
            break;
        }
    }
    
    printf("Reversed words: %s\n", str);
    
    return 0;
}