#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,s1;
	getline(cin,s);
	int i=0,diff=0;
	for(i=0;s[i]!='\0';i++)
	{
	  if(isupper(s[i]))	
	   {
	   	 diff=s[i]-'A';
	   	 s1.push_back('Z'-diff);
	   }
	   else	
	   {
	   	 diff=s[i]-'a';
	   	 s1.push_back('z'-diff);
	   }
	}
	for(int i=0;s1[i]!='\0';i++)
	  cout<<s1[i]<<endl;
	return 0;
}
