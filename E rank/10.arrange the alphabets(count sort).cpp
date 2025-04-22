#include<iostream>
#include<string>
using namespace std;
string arrange(string &input)
{
	int count[26]={0};
	string ans="";
	for(int i=0;input[i]!='\0';i++)
	{
		int temp=(int)input[i]-97;
		count[temp]++;
	}
	for(int i=0;i<26;i++)
	{
		for(int j=0;j<count[i];j++)
		{
			ans+=(char)i+97;
		}
	}
	return ans;
}
int main()
{
	string input;
	cout<<"Enter the Name: "<<endl;
	getline(cin,input);
	string order=arrange(input);
	cout<<order<<endl;
	return 0;
}
