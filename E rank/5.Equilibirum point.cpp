#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int eqpoint(int a[],int n)
{
	int lsum=0;
	int rsum=0;
	for(int i=0;i<n;i++)
	{
		rsum=rsum+a[i];
	}
	for(int j=0;j<n;j++)
	{
		lsum=lsum+a[j];
		if(lsum == rsum)
		{
			return j+1;
		}
		rsum=rsum-a[j];
	}
	return -1;
}
int main()
{
	string input;
	int num;
	int a[100];
	int i=0;
	getline(cin,input);
	stringstream ss(input);
	while(ss >> num)
	{
	  a[i++]=num;	
	}
	int index=eqpoint(a,i);
	if(index==-1)
	cout<<"NO Equilibirum"<<endl;
	else
	cout<<"The index of equilibirum point :"<<index<<endl;
	return 0;	
}
