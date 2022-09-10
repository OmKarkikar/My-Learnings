#include<bits/stdc++.h>
using namespace std;

class rectangle
{
    public:
     int length;
     int breadth;

     void area()
     {
         cout << "Area of rectangle =" << length * breadth<<endl;
     }
};

class cubiod : public rectangle
{
  public:
    int height;

    void volume()
    {
        cout << "Volume of cuboid =" << length*breadth*height;
    }
};

 int main() {

    cubiod c;

    c.length = 10 , c.breadth = 20 , c.height = 30;

    c.area();

    c.volume();

     
     return 0;
 }
