#include<bits/stdc++.h>
using namespace std;

 class base
 {
     public:
      virtual void show()
      {
          cout << "Base Class" << endl;
      }

 };

 class derv1 : public base
 {
   public:
    void show()
    {
        cout << "Derived Class 1" << endl;
    }
 };

 class derv2 : public base
 {
     public:
      void show()
      {
          cout << "Derived Class 2" << endl;
      }
 };

 int main() 
 {  
    base *ptr;

    ptr = new derv1();

    ptr->show();

    ptr = new derv2();

    ptr->show();
     
     return 0;
 }