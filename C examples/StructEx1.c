 #include <stdio.h>
 #include <math.h>

 struct Point {
     int x,y;
 };

 int main() {
     struct Point p,q;
     int diffx,diffy;
     double distance;

     printf("Enter first point\n");   
     printf("Enter x");
     scanf("%d", &p.x);

     printf("Enter y");
     scanf("%d", &p.y);

     printf("Enter second point\n");   
     printf("Enter x");
     scanf("%d", &q.x);

     printf("Enter y");
     scanf("%d", &q.y);

     diffx = p.x - q.x;
     diffy = p.y - q.y;

     distance = sqrt (diffx * diffx + diffy * diffy);

     printf("Distance between two points is = %lf\n", distance);



     return 0;
 }