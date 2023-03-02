#include<iostream>
#include<string>
using namespace std;
bool palindrome(string word){
	for (int i = 0; i < word.length() / 2; i++){
		if (word[i] != word[word.length() - i - 1]){
			return false;
		}
	}
	return true;
}

int main()
{
	string word;
	cout<<"Input the word:"<<endl;
	cin>>word;
	if(palindrome(word)){
		cout<<word<<" is a palindrome word"<<endl;
	}
	else{
		cout<<word<<" is not a palindrome word"<<endl;
	}
	return 0;
}
