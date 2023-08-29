// @Felix-Kyun
#include <stdio.h>

#define TABLEOF 5

int main(void) {

    for ( int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", TABLEOF, i, TABLEOF * i);
    }

    return 0;
}