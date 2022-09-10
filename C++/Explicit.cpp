 #include <iostream>
 using namespace std;

 int main() {

     int var1;

     int var2 = 10.5;                       

     var1 = static_cast <int>(var2 + 43.1234 + 'C');
     cout << "\n The value is =" << var1;
     cout << "\n The value is =" << var2;
     
     return 0;
 }



