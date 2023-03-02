//To find if the year is leap(Kabisa)
#include<iostream>
using namespace std;
int main()
{  int year;
   cout<<"Input the year: ";
   cin>>year; 
   if(year%400==0 ){
    cout<<"The year has 366 days"<<endl;
   }
   else if(year%100==0){
    cout<<"The year has 365 days"<<endl;
   }
   else if(year%4==0){
    cout<<"The year has 366 days"<<endl;
   }
   else{
    cout<<"The year has 365 days"<<endl;
   }
    return 0;
}