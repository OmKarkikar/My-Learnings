 #include <stdio.h>
 #include <stdlib.h>
 
 typedef double Currency;

 struct Emp {
     int eno;
     double salary;
 };

 typedef struct {
     int eno;
     double salary;
     } Emp ;

 int main() {

     Emp e;
     e.eno = 10;
     e.salary = 2009;

     printf("eno value is %d  \n",e.eno);
     printf("salary value is %lf\n",e.salary);
            

     Currency a;
     a=10.2;
     printf("The value of a is %lf\n", a);

     
     return 0;
 }