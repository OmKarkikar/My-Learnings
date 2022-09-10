#include <stdio.h>

/*
   This is multiline comment.
   Followng example demonstrates usage of pointers.
*/

int main() {
    double a, b;
    double*p;

    p = &a; // p now points to a
    *p = 10.2; // it assigns 10.2 to the variable a.

    p = &b; // p now points to b
    *p = 20.4; // it assigns 20.4 to the variable b.

    printf("a is %lf\n b is %lf\n",a,b); 

    return 0;
}