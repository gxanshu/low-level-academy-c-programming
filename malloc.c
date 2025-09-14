#include "stdio.h"
#include <stdlib.h>

struct Employee_it {
    int id;
    float income;
};

void init_employee(struct Employee_it *employee) {
    employee->id = 0;
    employee->id = 10.00;
}

int main() {
    int n = 4;
    struct Employee_it *employees = malloc(sizeof(struct Employee_it) * n);
    if (employees == NULL) {
        printf("The allocator failed \n");
        return -1;
    }

    init_employee(&employees[0]);

    printf("%d\n", employees[0].id);

    free(employees);
    employees = NULL;
}
