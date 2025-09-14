#include "stdio.h"

struct Employee_it {
    int id;
    float income;
};

void init_employee(struct Employee_it *employee) {
    employee->id = 0;
    employee->id = 10.00;
}

int main() {
    struct Employee_it rohan;
    init_employee(&rohan);

    printf("%f\n", rohan.income);
}
