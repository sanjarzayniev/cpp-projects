#include<iostream>
using namespace std;
int main()
{int n, rs=0, ry=0, q;
cout<<"n sonini kiriting: "; cin>>n;

while(n>0){
    q=n%10;
    n=(n-q)/10;
    ry=ry+q; 
    rs=rs+1;  
}
cout<<"Raqamlar soni "<<rs<<" ga teng"<<endl;
cout<<"Raqamlar yigindisi "<<ry<<" ga teng"<<endl;
    return 0;
}
