#include<iostream>
#include<vector>
using namespace std;
void snake(vector< vector<int> > &matrix,int r,int c)
{
	vector<int>a;
	for(int i=0;i<r;i++)
	{
		if(i%2==0)
		{
		for(int j=0;j<c;j++)
		{ 	
		  a.insert(a.end(),matrix[i][j]);	
		}
    	}
    	else
    	{
    		for(int j=c-1;j>=0;j--)
    		{
    		 a.insert(a.end(),matrix[i][j]);	
			}
		}
	}
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int i,j;
	int row,col;
	cout<<"Row : "<<endl;
	cin>>row;
	cout<<"col : "<<endl;
	cin>>col;
	vector< vector<int> >matrix(row,vector<int>(col));
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>matrix[i][j];
		}
	}
	snake(matrix,row,col);
	return 0;
	
}
