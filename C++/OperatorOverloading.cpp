 #include <iostream>
 #include <string>
 using namespace std;

 class A
 {
     private:
      int  weight;
     public:
       A(int x = 0)
      {
          weight = x;

      }

      void PrintValue()
      {
          cout << endl << "Weight is =" << weight;
      }
      A operator+(A w)
      {
          A temp;
          temp.weight = weight + w.weight;
          return temp;

      }
 };

 int main() {

     int a = 20 , b = 18 ,c = 0;
     c  = a + b;

     cout << endl << "Total =" << c;
     

     A Person1(89);
     A Person2(99);
     A Total;

     Total = Person1 + Person2;
     Total.PrintValue();

     return 0;
 }



