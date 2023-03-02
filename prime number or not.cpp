//Kiritilgan son tub yoki tub emasligini aniqlash
#include<iostream>
using namespace std;
int main(){
int N, count=0;
cout<<"N natural sonini kiriting: ";cin>>N;
for(int i=2; i<=N; i++){
    if(N%i==0){
        count=count+1;
    }   
}
if(count==1){
    cout<<"Bu tub son"<<endl;
}
else{
    cout<<"Bu tub son emas"<<endl;
} 
    return 0;           
}         




   