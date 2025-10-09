/* password_do_while.c */
/*
Name;francis gitau njuguna
Reg;CT100/G/26126/25
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char password[100];

    do {
        printf("Enter password: ");
        if (scanf("%99s", password) != 1) return 1;
    } while (strcmp(password, "32145") != 0);

    printf("Access Granted\n");
    return 0;
}
