#include<bits/stdc++.h>
using namespace std;

 int main() {

     ofstream fout;

     fout.open("my.txt", ios :: app);

     int pos;

     pos = fout.tellp();

     cout << "Put pointer is at " << pos << endl;

     fout << "Karkikar";

     pos = fout.tellp();
     cout << "Put pointer after writing " << pos;

     fout.close();
     
     return 0;
 }