#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
bool findtrip(vector<int> a)
{
	int n=a.size();
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++)
	{
		int  l=i+1;
		int m=n-1;
		while(l<m)
		{
			if(a[i]+a[l]+a[m]==0) return true;
			else if(a[i]+a[l]+a[m]>0) m--;
			else l++;	  
		}	
	}
	return false;
}
int main()
{
	int k;
	cout<<"enter the number of check:"<<endl;
	cin>>k;
	cin.ignore();
	for(int i=0;i<k;i++)
	{
	vector<int>a;
	cout<<"enter the array: ";
	string input;
	getline(cin,input);
	int num;
	stringstream ss(input);
	while(ss >> num)
	{
		a.push_back(num);
	}
	if(findtrip(a))
	{
		cout<<"TRUE"<<endl;
	}
	else
	    cout<<"FALSE"<<endl;
    }
	return 0;
}
