// water bill calculater
/*
Name;FRANCIS GITAU NJUGUNA
REG;CT100/G/26126/25
Descriptions;water bill calculater
*/


#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    // Input
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Bill calculation
    if (units <= 30) {
        bill = units * 20;
    } else if (units <= 60) {
        bill = (30 * 20) + (units - 30) * 25;
    } else {
        bill = (30 * 20) + (30 * 25) + (units - 60) * 30;
    }

    // Output with 2 decimal places
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}
