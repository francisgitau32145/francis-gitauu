// loan eligibility user prompt
/*
name:francis gitau njuguna
reg:CT100/G/26126/25
Description:loan eligibility user prompt
*/

#include <stdio.h>

int main() {
    int age;
    float income;

    // Get user input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (in Sh): ");
    scanf("%f", &income);

    // Check eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}