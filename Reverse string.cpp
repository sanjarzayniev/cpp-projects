#include<iostream>
#include<string>
using namespace std;
void reverseString(string *str) {
	string new_str;
	
	for (int i=(*str).length()-1; i>=0; i--){
		new_str += (*str)[i];
	}
	*str = new_str;
}

int main()
{
	string str;
	cout<<"Input the word:"<<endl;
	cin>>str;
	reverseString(&str);
	cout<<"Reversed word is "<< str <<endl;	
	
	
	
	
	return 0;
}
