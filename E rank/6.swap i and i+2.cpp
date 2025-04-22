#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
void swap(int a[],int n)
{
  int temp;	
  for(int i=0;i<n-2;i++)
  {
  	temp=a[i+2];
  	a[i+2]=a[i];
  	a[i]=temp;
  }	
}
int main()
{
	string input;
	getline(cin,input);
	stringstream ss(input);
	int a[100],num;
	int i=0,j=0;
	while(ss >> num)
	{
		a[i++]=num;
	}
	swap(a,i);
	cout<<"The i: "<<i<<" j = "<<j<<endl;
	cout<<"The Swaped Array: "<<endl;
	while(j<i)//i=total element and j is zero
	{
	  cout<<a[j]<<" "; 
	  j++;	
	}
	return 0;
}





