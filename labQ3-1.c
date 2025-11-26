#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles triangle\n");
        } else if ((a * a + b * b == c * c) ||
                   (a * a + c * c == b * b) ||
                   (b * b + c * c == a * a)) {
            printf("Right angle triangle\n");
        } else {
            printf("Scalene triangle\n");
        }
    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}
