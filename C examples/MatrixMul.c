 #include <stdio.h>

 int main() {
     int a[10] [10],b[10][10],c[10][10];
     int i,j;
     int m,n,p,q;
     int sum,k;

     printf("Enter matrix dimmensions first matrix ");
     scanf("%d %d", &m,&n);

     printf("Enter matrix dimmensions second matrix ");
     scanf("%d %d", &p,&q);

     if (n != p) {
         printf("Since n!=p cannot perform matrix multiplication");
         return 1;
     }

     //read the values of the array
     printf("\nEnter values for first matrix\n");
     for (i=0;i<m;i++) {
     for (j=0;j<n;j++) {
         printf("enter value for row: %d col : %d ", i, j);
         scanf("%d", &a[i][j]);
        }
     }
     printf("\nEnter values for second matrix\n");
     for (i=0;i<p;i++) {
     for (j=0;j<q;j++) {
         printf("enter value for row: %d col : %d ", i, j);
         scanf("%d", &b[i][j]);
        }
     }

     //Matrix multiplication logic
     for (i=0;i<m;i++) {
     for (j=0;j<q;j++) {
         sum=0;
         for (k=0; k<n ; k++) {
             sum += a[i][k] * b[k][j];
         }
          c[i][j]= sum;
     }
     }

     //print the values
     printf("Multiplication result is \n");
     for (i=0;i<m;i++) {
     for (j=0;j<q;j++) {
         printf(" %d ",c[i][j]);
        }
        printf("\n");
     }


     
     return 0;
 }