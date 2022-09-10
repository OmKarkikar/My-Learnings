#include<bits/stdc++.h>
using namespace std;

 int main() {
     
     ifstream fin;
     char ch;

     fin.open("my.txt");
     int pos;
     pos = fin.tellg();

     cout << pos << endl;

     fin >> ch;

     pos = fin.tellg();

     cout << pos;

     fin.close();

     return 0;
 }