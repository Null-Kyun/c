// @Felix-Kyun
#include <stdio.h>

// #define DSC


#ifdef DSC
#define  CHANGE -1
#define START 10
#define END 0
#else
#define CHANGE 1
#define START 1
#define END 11
#endif

int main(int argc, char **argv){

    for (int i=START; i != END; i += CHANGE){
        printf("%d\n", i);
    }

    return 0;

}