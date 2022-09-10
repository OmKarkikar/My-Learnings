 #include <iostream>
 #include <string>
 using namespace std;

 class Mobile
 { private:
     string name;
     int RAM;
     string processor;
     int battery;

   public:
     Mobile(string name_a = "NULL",int RAM_a = 0,string processor_a = "NULL",int battery_a = 0)
     {
         name = name_a;
         RAM = RAM_a;
         processor = processor_a;
         battery = battery_a;
     }

     Mobile (Mobile &mob)
     {
         name = mob.name;
         RAM = mob.RAM;
         processor = mob.processor;
         battery = mob.battery;
     }

     void getMobileData();

 };

 void Mobile :: getMobileData()
 {
     cout << endl << "Name =" << name;
     cout << endl << "RAM =" << RAM;
     cout << endl << "Processor =" << processor;
     cout << endl << "Battery =" << battery;

 }

 int main() {

     Mobile doka;

     Mobile doka2("Doka123" , 4 , "Snapdragon" , 4000);

     Mobile doka3(doka2);

     doka.getMobileData();
     doka2.getMobileData();
     doka3.getMobileData();

     
     return 0;
 }



