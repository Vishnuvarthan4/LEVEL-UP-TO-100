//sum of two values to get in given array
#include<iostream>
#include<sstream>
#include<vector>
#include<string>
#include<algorithm>
using  namespace std;
bool keypair(vector<int>&a,int n,int x)
{
	sort(a.begin(),a.end());
	int i=0,j=n-1;
	while(i<j)
	{
		if(a[i]+a[j]==x)
		 return true;
		else if (a[i]+a[j]<x)
		 i++;
		else
		 j--; 
	}
	return false;
}
int main()
{
	string input;
	vector<int>a;
	cout<<"ENTER THE ARRAY :"<<endl;
	getline(cin,input);
	stringstream ss(input);
	int num,sum;
	while(ss >> num)
	{
	  a.push_back(num);	
	}
	cout<<"ENTER THE SUM :"<<endl;
	cin>>sum;
	int n=a.size();
	if(keypair(a,n,sum)==1)
	{
		cout<<"yes"<<endl;
	}
	else cout<<"no"<<endl;
}
