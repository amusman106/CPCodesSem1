/*
Expt : 1
Task : 2
Title : WAP to get students PCM marks from the user and find average.
Use conditinal operator to print if the student is eligible for admission.
Eligibility criteria is 50% in PCM.
Name : Ansari Mohammed Usman
Class : FE
DIV : C
UIN : 241P054
Roll No: 49
*/

#include <stdio.h>

 int main() {

    float physics, chemistry, maths, average;

    printf("Enter Physics marks\t: ");
    scanf("%f", &physics);
    printf("Enter Chemistry marks\t: ");
    scanf("%f", &chemistry);
    printf("Enter Maths marks\t: ");
    scanf("%f", &maths);
    average = (physics + chemistry + maths) / 3;
    printf("Average marks\t: %.2f\n", average);
    if (average >= 50) {
    printf("Eligible for admission.\n");
}   else {
    printf("Not eligible for admission.\n");
}

return 0;

}

/* OUTPUT
Enter Physics marks : 50
Enter Chemistry marks : 50
Enter Maths marks : 50
Average marks : 50.00
Eligible for admission.
Process returned 0 (0x0) execution time : 8.958 s
Press any key to continue.*/
