 #include <iostream>
 #include <string>
 using namespace std;

 class person
 {
     private:
      int weight;
     public:
      person (int w = 0)
      {
          weight = w;
      }

      void PrintWeight()
      {
          cout << "Weight is =" << weight << endl;
      }

      void operator++()
      {
          ++weight;
      }

      void operator++(int)
      {
          weight++;
      }
 };

 int main() {

     person jon(78);
     ++jon;

     jon++;

     jon.PrintWeight();
     
     return 0;
 }



