#include<iostream>

using namespace std;



void merge(int array_1[], int array_2[]) {
	int array_3[20];
	int length_1 = 10, length_2 = 10, left = 0, right = 0, k = 0;
	
	while (left < length_1 && right < length_2) {
		if (array_1[left] < array_2[right]) {
			array_3[k++] = array_1[left++];
		} else {
			array_3[k++] = array_2[right++];
		}
	}
	
	while (left < length_1) {
		array_3[k++] = array_1[left++];
	}
	
	while (right < length_2) {
		array_3[k++] = array_2[right++];
	}
	
	cout << "Array 1:\n";
		for (int i = 0; i < 10; i++) {
		cout << "Element [" << i << "] = " << array_1[i] << endl;
	}
	cout << "Array 2:\n";
	for (int i = 0; i < 10; i++) {
		cout << "Element [" << i << "] = " << array_2[i] << endl;
	}
	cout << "Merged:\n";
	for (int i = 0; i < 20; i++) {
		cout << "Element [" << i << "] = " << array_3[i] << endl;
	}
}

int main()
{
	int n, a[100];
	cout<<"Task 1"<<endl;
	cout<<"Input the number of elements of array:"<<endl;
	cin>>n;
	cout<<"Input the array elements:"<<endl;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<"\nThe array is like:"<<endl;
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]="<<a[i]<<endl;
	}//task 1 is completed 
	
	
	cout<<"\nTask 2"<<endl;
	int m;
	cout<<"Input the number of elements of array:"<<endl;
	cin>>m;
	cout<<"Input the array elements:"<<endl;
	for(int i=0; i<m; i++){
		cin>>a[i];
	}
	int i, val, index; 
	float sum=0;
	for(int i=0; i<m; i++){
		sum += a[i];
	}
	cout<<"The average is "<<sum/m<<endl;//task 2 is completed 
	
	
	cout<<"\nTask 3"<<endl;	
	
	int array_1[] = {1,2,3,4,7,10,14,18,58,61}, array_2[] = {8,9,15,17,19,22,24,28,31,58};
	
	merge(array_1, array_2);
	
	cout<<"\nTask 4"<<endl;
	int j;
	cout<<"Input the number of elements of array:"<<endl;
	cin>>j;
	cout<<"Input the array elements:"<<endl;
	for(int i=0; i<j; i++){
		cin>>a[i];
	}
	cout<<"Input the value to insert:"<<endl;
	cin>>val;
	cout<<"Input where to insert:"<<endl;
	cin>>index;
	for(int i=j; i>=index; i--){
		a[i+1]=a[i];
	}
		a[index]=val;
		n=n+1;
	cout<<"The result is like:"<<endl;
	for(int i=0; i<j; i++){
		cout<<"a["<<i<<"]="<<a[i]<<endl;//task 4 is completed
	}
	
	
	cout<<"\nTask 5"<<endl;
	int k, position;
	cout<<"Input the number of elements of array:"<<endl;
	cin>>k;
	cout<<"Input the array elements:"<<endl;
	for(int i=0; i<k; i++){
		cin>>a[i];
	}
	cout<<"Input the position where to delete:"<<endl;
	cin>>position;
	for(i=position; i<k; i++){
		a[i]=a[i+1];
	}
	k=k-1;
	for(i=0; i<k; i++){
		cout<<"a["<<i<<"]="<<a[i]<<endl;
	}//task 5 is completed
	
	
	
	
	
	
	
	
	 	
	return 0;
}
