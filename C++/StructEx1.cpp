 #include <iostream>
 #include <string>
 using namespace std;

 struct person
 {
     string name;
     int age;
     float weight;
     float height;
     double salary;
 };

 int main() {

     person pVar;

     pVar.name = "Ruford";
     pVar.age = 34;
     pVar.height = 4.5f;
     pVar.weight = 68.4f;
     pVar.salary = 79563.23;

     pVar.salary = 90000.56;

     cout << endl << "Name =" << pVar.name;
     cout << endl << "Age =" << pVar.age;
     cout << endl << "Height =" << pVar.height;
     cout << endl << "Weight =" << pVar.weight;
     cout << endl << "Salary =" << pVar.salary;
     return 0;
 }



