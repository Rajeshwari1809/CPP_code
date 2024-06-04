#include<iostream>
using namespace std;
int main()
{
	int num;
	int fact=1;
	cout<<"enter the number:"<<endl;
	cin>>num;
	for(int i=1; i<=num;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial: "<<fact<<endl;
	
	return 0;	
}
