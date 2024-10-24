/*
Expt : 2
Task : 1
Title : WAP to find if entered number is even or odd.
(Draw flow chart also).
Name : Ansari Mohammed Usman
Class : FE
DIV : C
UIN : 241P054
Roll No: 49
*/

#include <stdio.h>

int main() {

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
    printf("The number is even.\n");
}   else {
    printf("The number is odd.\n");
}


return 0;
}

/* OUTPUT
Enter a number: 3
The number is odd.
Process returned 0 (0x0) execution time : 2.224 s
Press any key to continue.*/
