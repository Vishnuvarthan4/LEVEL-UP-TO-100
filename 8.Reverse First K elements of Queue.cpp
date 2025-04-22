#include<bits/stdc++.h>
using namespace std;
int main()
{
	int len,k,value;
	cout<<"Length :"<<endl;
	cin>>len;
	cout<<"Reverse elements :"<<endl;
	cin>>k;
	queue<int>q;
	for(int i=0;i<len;i++)
	{
		cin>>value;
		q.push(value);
	}
	queue<int>r;
	stack<int>s;
	for(int i=0;i<k;i++)
	{
		s.push(q.front());
		q.pop();
	}
	for(int i=0;i<k;i++)
	{
		r.push(s.top());
		s.pop();
	}
	for(int i=0;i<len-k;i++)
	{
		r.push(q.front());
		q.pop();
	}
	cout<<"THE reversed queue is ";
    for(int i=0;i<len;i++)
	{
		cout<<r.front();
		r.pop();
	}
	
	return 0;
}
