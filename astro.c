#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int r = 0, b = 0;
    
    // Input string
    printf("Enter: ");
    fgets(s, sizeof(s), stdin);
    
    // Convert to uppercase and calculate the sum of the numerical values of letters
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i])) {
            r += toupper(s[i]) - 'A' + 1;  // Convert letters to numerical values (A=1, B=2, ..., Z=26)
        }
    }
    
    // Keep reducing until a single digit is obtained
    while (r > 9) {
        b = 0;
        while (r > 0) {
            b += r % 10;  // Sum the digits of r
            r /= 10;
        }
        r = b;
    }

    // Output corresponding meanings based on the result
    switch (r) {
        case 1:
            printf("Leadership, independence, individuality\n");
            break;
        case 2:
            printf("Balance, cooperation, sensitivity\n");
            break;
        case 3:
            printf("Creativity, expression, communication\n");
            break;
        case 4:
            printf("Stability, discipline, practicality\n");
            break;
        case 5:
            printf("Change, freedom, adventure\n");
            break;
        case 6:
            printf("Responsibility, love, nurturing\n");
            break;
        case 7:
            printf("Spirituality, introspection, wisdom\n");
            break;
        case 8:
            printf("Power, material success, ambition\n");
            break;
        case 9:
            printf("Compassion, humanitarianism, idealism\n");
            break;
        default:
            break;
    }

    return 0;
}
