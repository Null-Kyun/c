#include <stdio.h>

#define EVEN
#define START 0
#define END 50

int main(void) {
    for (int i = START; i <= END; i++) {
        #ifdef EVEN
        if (i % 2 == 0) {
        #else
        if (i % 2 != 0 ) {
        #endif
            printf("%d\n", i);
        }
    }    
    return 0;
}