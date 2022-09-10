 #include <iostream>
 using namespace std;

 int main() {

     int value=0,i;

     cout << "Enter a value";
     cin >> value;

     //for loop

     for (i = 1; i <= 10; i++)
     {
         cout << endl << value << "*" << i << "=" << value * i;

     }
     
     return 0;
 }


