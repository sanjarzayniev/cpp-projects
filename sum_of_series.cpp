#include<iostream>
using namespace std;
int main()//how to find a sum of a sequence like 1+(1+2)+(1+2+3)+...+(1+2+3+...+N)?
{
int sum=0, N;
cout<<"Input the value of N: ";
cin>>N;
for(int i=1; i<=N; i++){
	for(int j=1; j<=i; j++){
		cout<<j<<"+";
	}
	sum=sum+i*(i+1)/2;
}
	cout<<"\nSum is "<<sum<<endl;
	
	return 0;
}
