
#include<iostream>
using namespace std;


int main()
{
int i,sum=0;

//sum using do while loop
do
{
sum+=i;
i++;
}while(i<=10);
cout<<"\nUsing do-while loop Sum = "<<sum;
return 0;
}