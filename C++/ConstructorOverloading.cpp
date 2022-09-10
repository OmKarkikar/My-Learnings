 #include <iostream>
 #include <string>
 using namespace std;

 class Person
{
    private:
     string name;
     int age;
     float height;
    
    public:
     Person(string name_a = "NULL" , int age_a = 0, float height_a = 0.0f) //Paramaterized Constructor
        {
            name = name_a;
            age = age_a;
            height = height_a;
        }
     Person (Person &obj2) //Copy Constructor
        {
            name = obj2.name;
            age = obj2.age;
            height = obj2.height;
        }
     
    void getData()
        {
            cout << endl << "Name =" <<name;
            cout << endl << "Age =" <<age;
            cout << endl << "Height =" <<height;
        }
    
};

 int main() {

     Person obj , obj2("Om",20,5.7f) , obj3(obj2);

     obj.getData();

     obj2.getData();

     obj3.getData();
     
     return 0;
 }



