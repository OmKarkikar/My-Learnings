#include <stdio.h>

int main() {
   int a,b,c;

   printf("Enter a=");
   scanf("%d", &a);

   printf("Enter b=");
   scanf("%d", &b);

   printf("Enter c=");
   scanf("%d", &c);

   if (a>b && a>c)
      printf("%d is big", a);
   else 
   if (b>c)
      printf("%d iS big", b);
   else
      printf("%d is big", c);  

    return 0;
}