/*
Expt  : 3
Task  : 1
Title : WAP to design a menu driven calculator usng switch and goto.

Name  : Ansari Mohammed Usman
Class : FE
DIV   : C
UIN   : 241P054
RollNo: 49
*/

#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

start:
    printf("\nMenu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 5) {
        printf("Exiting the calculator. Goodbye!\n");
        return 0;
    }

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            goto start;
        case 2:
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            goto start;
        case 3:
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            goto start;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            goto start;
        default:
            printf("Invalid choice. Please try again.\n");
            goto start;
    }

return 0;
}

/* OUTPUT
Menu:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
Enter your choice: 3
Enter two numbers: 50 50
Result: 2500.00*/
