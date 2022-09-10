 #include <iostream>
 #include <string>
 using namespace std;

 struct camera
 {
     int front;
     int rear;
 };
 

 struct phone
 {
     string name;
     int RAM;
     int  ROM;
     string processor;
     camera camera;
     double price;
 };

 int main() {

     phone moto;

     moto.name = "Moto123";
     moto.camera.front = 13;
     moto.camera.rear = 20;
     moto.RAM = 4;
     moto.ROM = 64;
     moto.processor = "Snapdragon";
     moto.price = 6500.6;

     cout << endl << "Name =" << moto.name;
     cout << endl << "Camera Front =" << moto.camera.front;
     cout << endl << "Camera Rear =" << moto.camera.rear;
     cout << endl << "RAM =" << moto.RAM;
     cout << endl << "ROM =" << moto.ROM;
     cout << endl << "Processor =" << moto.processor;
     cout << endl << "Price =" << moto.price;
     return 0;
 }



