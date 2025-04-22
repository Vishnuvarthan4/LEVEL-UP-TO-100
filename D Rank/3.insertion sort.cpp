#include<iostream>
#include<string>
#include<sstream>
using namespace std;
void insertion_sort(int a[],int n)
{
	int key;
	for(int i=1;i<n;i++)
	{
		
		int j=i-1;
		key=a[i];
		cout<<"loop i,j,key     "<<i<<" "<<j<<" "<<key<<endl;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
			cout<<"while loop of j   "<<j<<endl;
		}
		a[j+1]=key;
		cout<<"the a[j+1] is  "<<key<<endl;
	}
	int i=0;
	while(i<n)
	{
		cout<<a[i]<<" ";
		i++;
	}
}
int main()
{
	string input;
	cout<<"Enter the array: "<<endl;
	getline(cin,input);
	stringstream ss(input);
	int i=0,num,a[100];
	while(ss >> num)
	{
		a[i++]=num;
	}
	insertion_sort(a,i);
	return 0;
}
