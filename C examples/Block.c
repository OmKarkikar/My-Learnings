#include <stdio.h>

int main() {
    int weekday;

    printf("Enter Weekday = 0-Sunday 1-Monday ..");
    scanf("%d, &weekday");

    if (weekday == 0 || weekday == 6 ) {
       printf("Enjoy");
       printf("Weekend");
       }
       
       
   
    

    return 0;
}