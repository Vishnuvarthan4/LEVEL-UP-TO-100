#include<iostream>
using namespace std;
int main()
{
	int n,ans=0,fact=1;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	if(n==0) cout<<"5"<<endl;
	else
	{
	  while(n>0)
	  {
	  if(n%10==0) ans=ans+5*fact;
	  else ans=ans+(n%10)*fact;
	  n=n/10;
	  fact=fact*10; 
	  }
	  cout<<ans<<endl;	
    }  
	return 0;
}
