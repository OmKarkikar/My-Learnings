 #include <stdio.h>
 #include <stdlib.h>

 #define MAXVALUE 20

 #ifdef MAXVALUE
  int limit = MAXVALUE;
 #else
  int limit = 10;
 #endif 

 int main() {
     printf("Limit is %d\n", limit);
     
     return 0;
 }