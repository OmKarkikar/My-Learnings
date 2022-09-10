 #include <iostream>
 using namespace std;

 int main() {

     int marks = 0;

     cout << "Enter your marks";
     cin >> marks;

     if (marks>=60 && marks<=100) {
         cout << endl << "You are pass !!!";
     }

     else {
         cout << endl << "You are fail !!!";
     }
     return 0;
     
 }
