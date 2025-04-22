#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >mat(int matrix[100][100],int n)
{
	int lsum=0,rsum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j) lsum+=matrix[i][j],rsum+=matrix[i][j];
			else if(i<j) rsum+=matrix[i][j];
			else lsum+=matrix[i][j];
		}	
	}
		vector<pair<int,int> >ans;
		ans.push_back({rsum,lsum});
		return ans;
}
int main()
{
	int matrix[100][100];
	int n;
	cout<<"ENTER THE N:"<<endl;
	cin>>n;
	cout<<"MATRIX:";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>matrix[i][j];
		}
	}
	vector<pair<int,int> >result=mat(matrix,n);
	cout<<"UPPER "<<result[0].first<<"LOWER  "<<result[0].second;
	return 0;
}
