//Sort 0s, 1s and 2s
#include<bits/stdc++.h>
using namespace std;
void sorted(int a[],int n)
{
	int c0=0,c1=0,c2=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		  c0+=1;
		else if(a[i]==1)
		  c1+=1;
		else
		  c2+=1; 
	}
	for(int j=0;j<c0;j++)
	 a[j]=0;
	for(int j=c0;j<c0+c1;j++)
	 a[j]=1;
	for(int j=c0+c1;j<n;j++)
	 a[j]=2;  
	
}
int main()
{
	string input;
	getline(cin,input);
	int num,a[100],i=0;
	stringstream ss(input);
	while(ss >> num)
	{
		a[i++]=num;
	}
	sorted(a,i);
	for(int j=0;j<i;j++)
	{
		cout<<a[j]<<" ";
	}
	return 0;
}

