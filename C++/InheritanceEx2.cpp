#include<bits/stdc++.h>
using namespace std;

class base
{
    public:
     base()
     {
         cout << "Default constructor of base class" << endl;
     }

     base (int b)
     {
         cout << "Para Constructor of base class" << endl;
     }
};

class derived : public base
{
    public:
     derived()
     {
         cout << "Default constructor of Derived class" << endl;
     }

     derived (int d) : base (d)
     {
         cout << "Para Constructor of Derived class" << endl;
     }
};
    

 int main() {

     derived d(9);


     return 0;
 }
