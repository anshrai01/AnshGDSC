#include <stdio.h>

int main() {
    int x, y, z;
    x = 03; // Octal literal: 3 in decimal
    y = 02; // Octal literal: 2 in decimal
    z = 01; // Octal literal: 1 in decimal
    
    printf("%d", x | y & z);
    return 0;
}
