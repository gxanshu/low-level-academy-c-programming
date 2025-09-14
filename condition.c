#include "stdio.h"

int main() {
    int temp;
    printf("What temprature is it ?");
    scanf("%d", &temp);

    if (temp >= 70) {
        printf("It's hot outside!\n");
    } else if (temp >= 30) {
        printf("It's warm outside!\n");
    } else {
        printf("It's cold outside!\n");
    }
}
