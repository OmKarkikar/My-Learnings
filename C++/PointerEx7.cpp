#include<bits/stdc++.h>
using namespace std;

 class person
 {
     private:
      int age;
      string name;

    public:
      person(int age, string name)
      {
          this->age = age;
          this->name = name;
      }

      void printValue()
      {
          cout << "Age " << age << endl;
          cout << "Name " << name << endl;
      }

 };

 int main() {

    person a(45 , "Jon");

    a.printValue();
     
     return 0;
 }