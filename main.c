#include <stdio.h>

int main() {
    // Core exercise variables
    double revenue;
    double expenses;
    double balance;

    // Extension exercise variables
    int departments;
    double payroll;
    double procurement;
    double assets;

    printf("=================================\n");
    printf("   MUNICIPAL BUDGET CALCULATOR\n");
    printf("=================================\n\n");

    // Core input
    printf("Please enter the following financial details:\n\n");

    printf("Total Revenue  (e.g. 1500000.00): N$ ");
    scanf("%lf", &revenue);

    printf("Total Expenses (e.g. 1250000.00): N$ ");
    scanf("%lf", &expenses);

    // Core calculation
    balance = revenue - expenses;

    // Extension input
    printf("\n---------------------------------\n");
    printf("   ADDITIONAL MUNICIPAL DETAILS\n");
    printf("---------------------------------\n\n");

    printf("Number of Departments: ");
    scanf("%d", &departments);

    printf("Total Payroll:            N$ ");
    scanf("%lf", &payroll);

    printf("Total Procurement Value:  N$ ");
    scanf("%lf", &procurement);

    printf("Total Asset Value:        N$ ");
    scanf("%lf", &assets);

    // Core output
    printf("\n=================================\n");
    printf("        BUDGET SUMMARY\n");
    printf("=================================\n");
    printf("Revenue:   N$ %.2f\n", revenue);
    printf("Expenses:  N$ %.2f\n", expenses);
    printf("Balance:   N$ %.2f\n", balance);

    // Extension output
    printf("\n---------------------------------\n");
    printf("  MUNICIPAL FINANCIAL SUMMARY\n");
    printf("---------------------------------\n");
    printf("Departments:   %d\n", departments);
    printf("Payroll:       N$ %.2f\n", payroll);
    printf("Procurement:   N$ %.2f\n", procurement);
    printf("Assets:        N$ %.2f\n", assets);

    return 0;
}