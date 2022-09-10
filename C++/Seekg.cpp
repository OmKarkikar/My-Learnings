#include<bits/stdc++.h>
using namespace std;

 int main() {

     ifstream fin;
     char A[10];

     fin.open("my.txt");

     for (int i=0; i < 10; i++)
     {
         A[i] = 0;
     }

     fin.seekg(4, ios_base::beg);

     fin.read(A, 4);

     for(int i=0; A[i] != 0; i++)
     {
         cout << A[i];
     }
     
     return 0;
 }