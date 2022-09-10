 #include <iostream>
 #include <string>
 using namespace std;

 void add(int , int);
 void add(float , float);
 void add(string , string);

 int main() {

     add(3,4);
     add(6.8f ,4.8f);
     add("Om","Karkikar");
     
     return 0;
 }

 void add(int x, int y)
 {
     cout << "Sum is" << x+y;
 }
void add(float x, float y)
 {
     cout << "\nSum is" << x+y;
 }
void add(string x, string y)
 {
     cout << "\nSum is" << x+y;
 }


