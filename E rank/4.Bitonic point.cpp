#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int maxi(int a[],int n)
{
  int beg=0,end=n-1;
  int mid;
  while(beg<=end)
  {
  	mid=(beg+end)/2;
  	if( a[mid]>a[mid+1] && a[mid]>a[mid-1])
  	{
  	  return a[mid];	
	}
	if(a[mid]<a[mid+1])
	{
		beg=mid+1;
	}
	else
	    end=mid-1;
	}	
}
int main()
{
	string input;
	getline(cin,input);
	stringstream ss(input);
	int i=0,num;
	int a[100];
	while(ss >> num)
	{
		a[i++]=num;
	}
	int result=maxi(a,i);
	cout<<" the largest number is :"<<result<<endl;
	return 0;
}
	
	
	
	
