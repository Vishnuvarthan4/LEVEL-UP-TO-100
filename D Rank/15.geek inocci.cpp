#include<iostream>
using namespace std;
int main()
{
	int a,b,c,N;
	int sum =0;
	int count =3;
	cout<<"-----SUM OF THREE CONSECUTIVE NUMBERS TO GET NEXT NUMBER"<<endl;
	cout<<"enter the three value for a,b and c:"<<endl;
	cin>>a>>b>>c;
	cout<<"enter the value of Nth number"<<endl;
	cin>>N;
	while(count<N)
	{
		sum=(a+b+c)%100000007;//to prevent overflow
		a=b;
		b=c;
		c=sum;
		count++;
	}
	cout<<c<<endl;
	
	return 0;
}
