#include<iostream>
using namespace std;
main(){
	int i,sum=0;
int	arr[10]={1,2,3,4,5,6,7,8,9,10};
	for(i=0;i<10;i++)
	{
		if(arr[i]==3)
		{
			continue;
		}
		if(arr[i]==5){
		continue;
	}
	sum=arr[i]+sum;
		}
		cout<<"The sum of integer:"<<sum<<endl;
		}
