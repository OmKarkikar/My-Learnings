#include <stdio.h>

int main() {

    long a = 10; // a is along variable.
    long * p = &a; // p is a pointer to a long variable
    long * * q = &p; // q is a pointer to pointer to a long variable.

    printf("a is %ld\n", a);
    printf("*p is %ld\n", *p);
    printf("**q is %ld\n", **q);

    return 0;
}