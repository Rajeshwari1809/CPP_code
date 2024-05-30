#include<iostream>
using namespace std;
int main()
{
	int n,temp;
	int r,sum;
	int cube;
	cout<<"enter the number"<<endl;
	cin>>n;
	temp=n;
	while(n>0)
	{
	r=n%10;
	sum=sum+(r*r*r);
	n=n/10;
}
if(temp==sum)
{
	cout<<"armstrong number"<<endl;
}
else
{
	cout<<"not an armstrong number"<<endl;
}
	return 0;
}
