// 12S24013 - ADRYAN JULIANTO PANJAITAN
// 12S24041 - NIKAH SUCHIA PANJAITAN

#include <stdio.h>

int main(int _argv, char **_argc) {
    char str[21]; 
    scanf("%20[^\n]", str); 
    
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%03d", (unsigned char)str[i]); 
    }
    printf("\n");
    
    return 0;
}