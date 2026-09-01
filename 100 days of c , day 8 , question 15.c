#include <stdio.h>

int main() {
    char ch;

    printf("Enter any Character: ");
    scanf(" %c", &ch);

    printf("You entered: '%c'\n", ch);
    printf("ASCII value: %d\n", ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase letter\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase letter\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    else {
        printf("Special character\n");
    }

    return 0;
}
