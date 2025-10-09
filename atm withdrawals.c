/* atm_withdrawals.c */

/*
Name francis gitau
REG CT100/G/26126/25
*/
#include <stdio.h>

int main(void) {
    double balance;

    printf("Enter initial account balance: ");
    if (scanf("%lf", &balance) != 1) return 1;

    while (balance > 0.0) {
        double withdraw;

        printf("Enter amount to withdraw: ");
        if (scanf("%lf", &withdraw) != 1) return 1;

        balance -= withdraw;

        printf("Remaining balance: %.2f\n", balance);

        if (balance <= 0.0) {
            printf("Account is zero or negative.\n");
        }
    }

    return 0;
}