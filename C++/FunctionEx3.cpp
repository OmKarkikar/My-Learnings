 #include <iostream>
 #include <string>
 using namespace std;

 void add(int , int);
 void add(int , int , int);

 int main() {

     add(7,8);
     add(1,2,3);
     
     return 0;
 }

 void add(int x, int y)
 {
     cout << endl << "Sum of 2 no. is" << x+y;
 }
 void add(int x, int y , int z)
 {
     cout << endl << "Sum of 3 no. is" << x+y+z;
 }



