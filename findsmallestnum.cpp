//to find the smallest number
#include<iostream>
using namespace std;
int main()
{
int a, b, c, smallest;
cout<<"Input three numbers: ";
cin>>a>>b>>c;
smallest=a;
if(smallest>=b){
    smallest=b;
}
if(smallest>=c){
    smallest=c;
}
cout<<"The smallest number is "<<smallest<<endl;


    return 0;
}