#include <stdio.h>

struct Employee {
    int emp_no;
    char name[30];
    float basic_pay;
    float allowance;
    float deduction;
    float net_pay;
};

int main() {
    int n, i;

    printf("Enter the number of employee: ");
    scanf("%d", &n);

    struct Employee e[n];

    for (i = 0; i < n; i++) {
        printf("Enter the employee number: ");
        scanf("%d", &e[i].emp_no);

        printf("Enter the name: ");
        scanf("%s", e[i].name);

        printf("Enter the basic pay: ");
        scanf("%f", &e[i].basic_pay);

        printf("Enter the allowances & deduction: ");
        scanf("%f %f", &e[i].allowance, &e[i].deduction);

        e[i].net_pay = e[i].basic_pay + e[i].allowance - e[i].deduction;
    }

    printf("\nEmp#    Name         BPay     Allow    Ded      Net\n");
    for (i = 0; i < n; i++) {
        printf("%-8d%-13s%-9.2f%-9.2f%-9.2f%-9.2f\n",
               e[i].emp_no, e[i].name, e[i].basic_pay,
               e[i].allowance, e[i].deduction, e[i].net_pay);
    }

    return 0;
}
