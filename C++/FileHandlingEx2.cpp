#include<bits/stdc++.h>
using namespace std;

 int main() {

     ifstream fin;
     char ch;

     fin.open("my.txt");
     fin >> ch;

     while (!fin.eof())
     {
         cout << ch;
         fin >> ch;
     }

     fin.close();
     
     return 0;
 }