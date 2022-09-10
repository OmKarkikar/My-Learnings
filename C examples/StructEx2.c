 #include <stdio.h>
 #include <math.h>

 struct Point {
     int x,y;
 };

 void read(struct Point *ptr) {
     printf("Enter x");
     scanf("%d", &ptr->x);

     printf("Enter y");
     scanf("%d", &ptr->y);

 }

 void print (struct Point t) {
     printf("(%d,%d)", t.x, t.y);
 }

 int main() {
     struct Point p,q;
     int diffx,diffy;
     double distance;

     printf("Enter first point\n");   
     read(&p);

     printf("Enter second point\n");   
     read(&q);

     diffx = p.x - q.x;
     diffy = p.y - q.y;

     distance = sqrt (diffx * diffx + diffy * diffy);
     
     printf("\nPoint p is\n");
     print(p);
     printf("\nPoint q is\n");
     print(q);

     printf("\nDistance between two points is = %lf\n", distance);



     return 0;
 }