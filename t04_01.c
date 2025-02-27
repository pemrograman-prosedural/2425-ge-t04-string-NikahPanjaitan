// 12S24013 - ADRYAN JULIANTO PANJAITAN
// 12S24041 - NIKAH SUCHIA PANJAITAN

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int _argv, char **_argc) {
    char str[61]; 
    scanf("%60s", str);
    
    int length = strlen(str);
    char result[21]; 
    int i = 0;
    
    for (; i < length; i += 3) {
        char temp[4]; 
        strncpy(temp, &str[i], 3);
        temp[3] = '\0';
        
        result[i / 3] = (char)atoi(temp);
    }
    result[i / 3] = '\0'; 
    
    printf("%s\n", result);
    return 0;
}