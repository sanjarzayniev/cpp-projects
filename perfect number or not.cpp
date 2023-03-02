//Kiritilgan son mukammal yoki mukammal emasligini aniqlash
#include<iostream>
#include<cmath>
using namespace std;
int main(){ 
int N, sum=0;
cout<<"N natural sonini kiriting: ";
cin>>N;
for(int i=1; i<=sqrt(N); i++){
    if(N%i==0){
        if(i*i==N){
            sum=sum+i+N/i-sqrt(N);
        }
        else{
            sum=sum+i+N/i;
        }
    }
    
}
if(sum-N==N){
    cout<<"Bu mukammal son"<<endl;
}
else{
    cout<<"Bu mukammal son emas"<<endl;
}       
    return 0;
}




