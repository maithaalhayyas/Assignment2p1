#include<stdio.h>

void amazeWOW() {
    int i;
    printf("amazeWOW:\t");
    for (i = 0; i <= 10; i++) {
        if (i % 2 == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
