#include<bits/stdc++.h>
using namespace std;

 class parent
 {
   public:
    virtual void show() = 0; //Pure Virtual Function
 };

 class boy : public parent
 {
     public:
      void show()
      {
          cout << "Brown Bun" << endl;
      }
 };

 class girl : public parent
 {
     public:
      void show()
      {
          cout << "Pink Bun" << endl;
      }
 };

 int main() {

     parent *ptr;

     ptr = new boy();

     ptr->show();

     ptr = new girl();

     ptr->show();
     
     return 0;
 }