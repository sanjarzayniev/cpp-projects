#include<iostream>
using namespace std;
void swapFunction(int *_x, int *_y){
	int _c = *_x;
	*_x=*_y;
	*_y=_c;
}
int main()
{
	int _x, _y;
	cout<<"Input two numbers: "<<endl;
	cin>>_x>>_y;
	cout << "Before swapping: " << _x << " " << _y << endl;
	swapFunction(&_x, &_y);
	cout<<"After swapping: "<< _x << " " << _y << endl;
	
	
	
	
	
	return 0;
}
