#include <stdio.h>

int main() {
    int num, i;

    // asking for the number
    printf("Enter the number to print its table: ");
    scanf("%d", &num);

    printf("\nHere is the multiplication table of %d:\n\n", num);

    // loop from 1 to 10
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}

