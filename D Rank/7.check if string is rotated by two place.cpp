#include<iostream>
#include<string>
using namespace std;
bool left(string &s,string &s2)
{
	//amazon--azonam
	int n=s.size();
	char temp1=s[0];//a
	char temp2=s[1];//m
	for(int i=0;i<n-2;i++)
		s[i]=s[i+2];
	s[n-2]=temp1;
	s[n-1]=temp2;
	cout<<"left rotate: "<<s<<endl;
	if(s==s2) return true;
	else return false;	
}
bool right(string &s,string &s2)
{
	//amazon--onamaz
	int n=s.size();
	char temp1=s[n-2];//o
	char temp2=s[n-1];//n
	for(int i=n-1;i>1;i--)
		s[i]=s[i-2];
	s[1]=temp2;
	s[0]=temp1;
	cout<<"right rotate: "<<s<<endl;
	if(s==s2) return true;
	else return false;	
}
int main()
{
	string s1,s2;
	cout<<"Enter the string 1:"<<endl;
	getline(cin,s1);
	cout<<"Enter the string 2:"<<endl;
	getline(cin,s2);
	int n=s1.size();
	if(n==1||n==2)
	{
	if(s1==s2)
	cout<<"true"<<endl;
	else
	cout<<"false"<<endl;
    }   
    else if(left(s1,s2)||right(s1,s2))
    cout<<"TRUE"<<endl;
    else
    cout<<"FALSE"<<endl;
	return 0;
}
