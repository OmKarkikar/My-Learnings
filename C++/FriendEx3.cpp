#include<bits/stdc++.h>
using namespace std;

 class person
 {
     private:
      int weight;
     public:
      person(int w=0)
      {
          weight = w;
      }

      friend bool operator>(person x, person y);
      friend bool operator<(person x, person y);
 };
 bool operator<(person x, person y) //less than
 {
     return x.weight < y.weight;
 }

 bool operator>(person x, person y) //greater than
 {
     return x.weight > y.weight;
 }



 int main() {

     int w1 , w2;

     cout << "Enter the weight of Jon " << endl;
     cin >> w1;

     cout << "Enter the weight of Rick " << endl;
     cin >> w2;

     person Jon(w1);

     person Rick(w2);

     if (Jon > Rick)
     {
         cout << "Jon is heavy " << endl;
     }

     else if (Rick > Jon)
     {
         cout << "Rick is heavy " << endl;
     }
     
     return 0;
 }