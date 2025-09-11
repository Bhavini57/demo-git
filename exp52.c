#include <stdio.h>

int main() {
    int num, i;

    // asking for the number
    printf("Enter the number : ");
    scanf("%d", &num);

    printf("\nthe multiplication table of %d:\n", num);

    // loop from 1 to 10
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}


