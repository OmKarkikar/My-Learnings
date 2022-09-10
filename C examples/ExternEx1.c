 /* External Declaration */
 #include <stdio.h>
 #include <stdlib.h>

 void change() {
     extern int n; //declaration
     n = 20;
 }

 //global declaration
 int n = 10;

 int main() {

     printf ("Before change function call, value of n is : %d\n",n);
     change();

     printf("After change function call, value of n is : %d\n",n);
     
     return 0;
 }