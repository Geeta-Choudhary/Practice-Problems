#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}; // For all ASCII characters
    int max = 0;
    char max_char;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    // Count frequency of each character
    for(int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find character with highest frequency
    for(int i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            max_char = i;
        }
    }

    printf("Character with highest frequency: '%c' (%d times)\n", max_char, max);

    return 0;
}
