#include<bits/stdc++.h>
using namespace std;

class Car
{
    private:
     int weight;
    public:
     void Setweight(int w)
     {
         weight = w;
     }

     int Getweight()
     {
         return weight;
     }
     
};

class BMW
{
    private:
     int topSpeed;
     Car *ptr;

    public:
     BMW(int wght = 0 , int tspeed = 0)
     {
         ptr = new Car;

         ptr->Setweight(wght);
         
         topSpeed = tspeed;
     }

     int getWeight()
     {
         return ptr->Getweight();
     }
         
     int getTspeed()
      {
             return topSpeed;
      }

     ~BMW()
      {
             delete ptr;
      }

     };
};

int main()
{
    BMW b(3000 , 350);

    cout << "Weight of car = " << b.getWeight() << endl;

    cout << "TopSpeed of car = "<< b.gettspeed() << endl;

    return 0;
}