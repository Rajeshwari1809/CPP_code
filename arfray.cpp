#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    int arr[size];
    int sum=0;
    cout<<"enter array elements"<<endl;
    for (int i=0;i<size;i++)
    {
    	cin>>arr[i];	
    	
	}
	 for (int i=0;i<size;i++)
	 {
	 		sum=sum+arr[i];
	 }
	
	cout<<"sum of array elements= "<<sum;
	return 0;
}
