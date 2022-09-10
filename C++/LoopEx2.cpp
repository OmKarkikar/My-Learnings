 #include <iostream>
 using namespace std;

 int main() {

     int value=0,i=1;

     cout << "Enter a value";
     cin >> value;

     //for loop

     while (i <= 10)
     {
         cout << endl << value << "*" << i << "=" << value * i;
         i++;
     }
     
     return 0;
 }


