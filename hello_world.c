#include <stdio.h>

// we can define this preprocessor while compiling as
// gcc -DDEBUG hello_world.c -o hello_world
#define DEBUG

int main() {
    int personID = 1;

    #ifdef DEBUG
        printf("WE ARE IN DEBUG MODE FILE: %s, LINE: %d\n", __FILE__, __LINE__);
    #endif

    printf("Person ID: %d\n", personID);
}
