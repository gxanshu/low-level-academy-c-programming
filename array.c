#include "stdio.h"

#define MAX_SIZE 10

int main() {
    int ids[MAX_SIZE] = { 0, 1, 2 };

    printf("ID: %d\n", ids[0]);

    ids[1] = 3;

    printf("ID 1 %d\n", ids[1]);
}
