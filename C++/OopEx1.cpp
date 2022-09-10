 #include <iostream>
 using namespace std;

 class house
 { private:
     int length = 0 , breadth = 0;
   public:
     void setData (int x, int y)
     {
         length = x;
         breadth = y;
     }
     void area()
     {
         cout << "Area of House =" << length * breadth;
     }
 };

 int main() {

     house gini;

     gini.setData(300,500);

     gini.area();
    
     
     return 0;
 }



