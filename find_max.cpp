#include<iostream>
using namespace std;
int main(){
	int a, b, c, max;
	cout<<"Input three numbers: "<<endl;
	cin>>a>>b>>c;
	max=a;
	if(max<=b){
		cout<<"Maximum number is "<<b<<endl;
	}	
	else if(max<=c){
		cout<<"Maximum number is "<<c<<endl;
	}
	else{
		cout<<"Maximum number is "<<a<<endl;
	}
	
	
	
	return 0;
}



