#include "stdio.h"
#include "stdbool.h"

#define MAX_EMPLOYEE 100

struct Employee_t {
    int id;
    float income;
    bool is_manager;
};

int main() {
    struct Employee_t employees[MAX_EMPLOYEE];

    int i = 0;
    for (i = 0; i < MAX_EMPLOYEE; i++) {
        employees[i].id = i;
        employees[i].income = 10.00;
        employees[i].is_manager = false;
    }

    printf("income %d\n", employees[0].id);
}
