#include <stdio.h>

int main() {
    int weekday;

    printf("Enter Weekday = 0-Sunday 1-Monday ..");
    scanf("%d, &weekday");

    switch(weekday) {
        case 0:
         printf("Sunday\n");
         break;
        case 1:
         printf("Monday\n");
         break;
        case 2:
         printf("Tuesday\n");
         break;
        default:
         printf("Invalid Statement");  
    }

    return 0;

}
       
      
       
       
       
   
    

    
