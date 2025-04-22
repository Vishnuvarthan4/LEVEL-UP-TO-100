#include<iostream>
using namespace std;
void sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			  a[j]=a[j+1]^a[j];
			  a[j+1]=a[j+1]^a[j];
			  a[j]=a[j+1]^a[j];
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	cout<<"ENTER THE ARRAY: ";
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,n);
	return 0;
}
