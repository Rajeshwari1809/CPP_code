#include<iostream>
using namespace std;
int main()
{
	int t1=0,t2=1,nexterm=0;
	int n;
	cout<<"enter the fibonaki term"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i==0)
		{
			cout<<t1<<endl;
			continue;
		}
		if(i==1)
		{
			cout<<t1<<endl;
			continue;
		}
	     nexterm=t1+t2;
	     t1=t2;
	     t2=nexterm;
	     cout<<nexterm<<endl;
	}
	return 0;
}
	
	
