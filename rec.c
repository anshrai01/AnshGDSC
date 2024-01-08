#include <stdio.h>

int main() {
    int n, a, b, c, next_term;

    // take input for first three terms and n
    scanf("%d %d %d %d", &a, &b, &c, &n);

    if (n == 1) {
        printf("%d", a);
    } else if (n == 2) {
        printf("%d", b);
    } else if (n == 3) {
        printf("%d", c);
    } else {
        // loop to calculate the nth term of the series
        for (int i = 4; i <= n; i++) {
            next_term = a + b + c;
            a = b;
            b = c;
            c = next_term;
        }
        // print the nth term of the series
        printf("%d", next_term);
    }

    return 0;
}
