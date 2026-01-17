#include <stdio.h>

int main() {
    int a[5], rev[5];

    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 5; i++) {
        rev[i] = a[4 - i];
    }

    printf("Reversed array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", rev[i]);
    }

    return 0;
}
