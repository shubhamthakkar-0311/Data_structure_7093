#include <stdio.h>

void main() {
    int a[3] = {1, 2, 3};
    int b[3] = {4, 5, 6};
    int c[3];
    int i;

    for (i = 0; i < 3; i++) {
        c[i] = a[i] + b[i];
    }

    printf("Array c: ");
    for (i = 0; i < 3; i++) {
        printf("%d ", c[i]);
    }

}
