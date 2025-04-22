#include<iostream>
#include<string>
using namespace std;
int find(string &s,string &x)
{
	int index=-1;
	int flag=0;
	for(int i=0;s[i]!='\0';i++)
	{
	  if(s[i]==x[0])
	  {
	  	int l=i;
	  	index=i;
	  	for(int j=0;x[j]!='\0';j++)//vishnu //nu l=4 index=4  
	  	{
	  		if(s[l]==x[j])
	  		{
	  			l++;
	  			flag=1;
			}
			else
			{
		     	flag =0;
		    	break;
	     	}
		}
		if(flag==1)
		{
			return index;
		}
	  }	
	}
	return index;
}
int main()
{
	string s,x;
	cout<<"ENTER STRING :"<<endl;
	getline(cin,s);
	cout<<"ENTER  SUB STRING :"<<endl;
	getline(cin,x);
	int index=find(s,x);
	cout<<"INDEX IS :"<<index;
	return 0;
}
