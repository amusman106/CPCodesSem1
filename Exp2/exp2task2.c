/*
Expt   : 2
Task   : 2
Title  : WAP to find the sum of all odd numbers between numbers
         entered by the user.(Draw the flowchart also).

Name   : Ansari Mohammed Usman
Class  : FE
DIV    : C
UIN    : 241P054
Roll No: 49
*/

#include <stdio.h>

int main() {

  int start, end, sum = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("Sum of odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}

/* OUTPUT
Enter the starting number: 1
Enter the ending number: 100
Sum of odd numbers between 1 and 100 is: 2500

Process returned 0 (0x0)   execution time : 33.779 s
Press any key to continue.*/
