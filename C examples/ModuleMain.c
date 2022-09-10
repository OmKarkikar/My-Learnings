 #include <stdio.h>
 #include <stdlib.h>

 #include "MyMathLib.c"

 int main() {

     printf("Added value is %d\n",add(100,200));

     printf("Subtracted value is %d\n",sub(100,200));

     printf("Division value is %d\n",division(200,100));
     
     return 0;
 }