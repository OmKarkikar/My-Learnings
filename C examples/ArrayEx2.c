#include <stdio.h>

int main() {
    double arr[5],big;
    int i;

    printf("Enter 5 elements =");
    for (i=0 ; i < 5 ; i++) {
        scanf ("%lf", &arr[i]);
    }

    big = arr[0];
    for (i=1 ; i < 5 ; i++) {
        if ( arr[i] > big){
            big = arr[i];
        }
    }

    printf("Biggest element is %lf\n", big);
    

    return 0;
}