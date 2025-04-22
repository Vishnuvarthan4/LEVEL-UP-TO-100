#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>a1,a2;
	int m,n,value;
	cout<<"Element for array 1:"<<endl;
	cin>>m;
	cout<<"Element for array 2:"<<endl;
	cin>>n;
	cout<<"Enter the array 1:"<<endl;
	for(int i=0;i<m;i++)
	{
		cin>>value;
		a1.push_back(value);
	}
	cout<<"Enter the array 2:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>value;
		a2.push_back(value);
	}
	//product of polynomial be m+n-1;
	vector<int>prod(m+n-1);
	for(int i=0;i<m;i++)
	{
	for(int j=0;j<n;j++)
	{
	   prod[i+j]+=a1[i]*a2[j];	
	}
	}	
	for(int i=0;i<m+n-1;i++)
	{
		cout<<prod[i]<<" ";
	}
	return 0;
}
