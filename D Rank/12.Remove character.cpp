#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	string copy="";
	cout<<"enter the main string:"<<endl;
	getline(cin,s1);
	cout<<"enter the substring:"<<endl;
	getline(cin,s2);
	int a[26]={0};//create the array for all alphabets
	int index;//to identify the location of alphabets
	for(int i=0;s2[i]!='\0';i++)
	{
		index=(int)s2[i]-97;
		a[index]++;
	}
	for(int i=0;s1[i]!='\0';i++)
	{
		index=(int)s1[i]-97;
		if(a[index]==0)
		{
			copy+=s1[i];
		}
	}
	cout<<"the removed string is:"<<copy<<endl;
	
	return 0;
}
