 #include <iostream>
 #include <string>
 using namespace std;

 int main() {

     string firstname, lastname, address;

     cout << endl << "Enter address";
     getline (cin, address);

     cout << endl << "Enter firstname";
     cin >> firstname;

     cout << endl << "Enter lastname";
     cin >> lastname;

     string fullname = firstname + lastname;

     cout << endl << "Your details :" << fullname << endl << address;
     
     return 0;
 }


