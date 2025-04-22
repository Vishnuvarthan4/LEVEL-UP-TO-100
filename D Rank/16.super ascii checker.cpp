#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;// To check the super ascii string .a=1,b=2,,,..and their count in string is equal then the value is true:
	cout<<"enter the string:"<<endl;
	getline(cin,s);
	int index;
	int flag=1;
	int arr[26]={0};
	int n=s.size();
	for(int i=0;i<n;i++)
	{
	   index=(int)s[i]-97;
	   arr[index]++;	
	}
	for(int i=0;i<n;i++)
	{
		index=(int)s[i]-97;
		if(arr[index]!=index+1)
		{
		   cout<<s[i]<<"--False"<<endl;
		   flag=0;
		}   
		else
		   cout<<s[i]<<"--True"<<endl;   
	}
	if (flag==0)
	     cout<<"There is no super ASCII String"<<endl;
	else
		 cout<<"Super ASCII String"<<endl;
	
}
