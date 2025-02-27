// 12S24013 - ADRYAN JULIANTO PANJAITAN
// 12S24041 - NIKAH SUCHIA PANJAITAN

#include <stdio.h>

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
    char str[21]; 
    
    if (fgets(str, sizeof(str), stdin) != NULL) {
        str[strcspn(str, "\n")] = '\0'; 
        
        for (int i = 0; str[i] != '\0'; i++) {
            printf("%03d", (unsigned char)str[i]);
        }
        printf("\n");
    }
    
    return 0;
}