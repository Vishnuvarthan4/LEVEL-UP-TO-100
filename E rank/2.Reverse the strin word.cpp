#include<iostream>
#include<stack>
#include<string>
using namespace std;
string rev(string s)
{
	string a;
	stack <string> word;
	for(int i=0;i<s.length();i++)
	{
		
			if(s[i]==' ')
			{
				if(!a.empty())
	        	{
			     word.push(a);
			     a="";
		     	}
			}
			else
			{
				a+=s[i];
			}
	}
		
	 word.push(a);
	string ans;
	while(!word.empty())
	{
	   ans+=word.top();
	   ans+=" ";
	   word.pop();
	   	
	}
	return ans;
}
int main()
{
	string input;
	getline(cin,input);//can store the space also
	string reverse=rev(input);
	cout<<"The reversed words are:"<<reverse<<endl;
	return 0;
}
