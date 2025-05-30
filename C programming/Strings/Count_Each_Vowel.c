#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int a_count = 0, e_count = 0, i_count = 0, o_count = 0, u_count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline
    str[strcspn(str, "\n")] = '\0';

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        switch(ch) {
            case 'a': case 'A': a_count++; break;
            case 'e': case 'E': e_count++; break;
            case 'i': case 'I': i_count++; break;
            case 'o': case 'O': o_count++; break;
            case 'u': case 'U': u_count++; break;
        }
    }

    printf("\nCount of each vowel:\n");
    printf("A/a: %d\n", a_count);
    printf("E/e: %d\n", e_count);
    printf("I/i: %d\n", i_count);
    printf("O/o: %d\n", o_count);
    printf("U/u: %d\n", u_count);

    int total = a_count + e_count + i_count + o_count + u_count;
    printf("Total number of vowels: %d\n", total);

    return 0;
}
