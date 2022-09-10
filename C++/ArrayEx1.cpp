 #include <iostream>
 using namespace std;

 int main() {

     //create array    
                      //datatype name_of_array[size] = {}
        int arr[5] = {0};

        for (int i=0;i<5;i++)
        {
            cout << "Enter no. " << i <<"";
            cin >> arr[i];
        }
       
       int min = arr[0];

        for (int i=0;i<5;i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
            }
        }

        cout << endl << "Min value is :" << min;
     return 0;
 }



