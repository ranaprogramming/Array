#include<iostream>
using namespace std;
main()
{
	int arr[10],i;
	cout<<"Enter 10 integers"<<endl;
	for(int i=0;i<10;++i){
	cin>>arr[i];
	}
		cout<<"Original array:"<<endl;
		for(int i=0;i<10;++i){
	cout<<arr[i]<<endl;	
	}
	cout<<"Array in reverse order:"<<endl;
	for(int i=10-1;i>=0;i--){
	cout<<arr[i]<<endl;	
	}
	}
		
