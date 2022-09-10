 #include <stdio.h>

 int main() {
     int a[10] [10],b[10][10],c[10][10];
     int i,j;
     int m,n;

     printf("Enter matrix dimmensions m and n ");
     scanf("%d %d", &m,&n);

     //read the values of the array
     printf("\nEnter values for first matrix\n");
     for (i=0;i<m;i++) {
     for (j=0;j<n;j++) {
         printf("enter value for row: %d col : %d ", i, j);
         scanf("%d", &a[i][j]);
        }
     }
     printf("\nEnter values for second matrix\n");
     for (i=0;i<m;i++) {
     for (j=0;j<n;j++) {
         printf("enter value for row: %d col : %d ", i, j);
         scanf("%d", &b[i][j]);
        }
     }

     //Matrix addition logic
     for (i=0;i<m;i++) {
     for (j=0;j<n;j++) {
         c[i][j]= a[i][j] + b[i][j];
     }
     }

     //print the values
     printf("Added result is \n");
     for (i=0;i<m;i++) {
     for (j=0;j<n;j++) {
         printf(" %d ",c[i][j]);
        }
        printf("\n");
     }


     
     return 0;
 }