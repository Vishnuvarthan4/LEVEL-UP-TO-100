#include<bits/stdc++.h>
using namespace std;
int pairs(vector<int>v1,vector<int>v2,int x)
{
	int i=0,j=v2.size()-1,count =0;
	while(i<v1.size() && j>=0)
	{
		if(v1[i]+v2[j]==x) count++,j--;
		else if(v1[i]+v2[j]<x) i++;
		else j--;	   
	}
	return count;	
}
int main()
{
	vector<int> a1,a2;
	string input1,input2;
	int sum;
	cout<<"ENTER THE SUM :";
	cin>>sum;
	cin.ignore();  // **Fixing input skipping issue**
	cout<<endl<<"ENTER ARRAY 1:"<<endl;
	getline(cin,input1);
	cout<<endl<<"ENTER ARRAY 2:"<<endl;
	getline(cin,input2);
	stringstream ss(input1);
	int num1;
	while(ss >> num1) a1.push_back(num1);
	stringstream s1(input2);
	int num2;
	while(s1 >> num2) a2.push_back(num2);
	sort(a1.begin(), a1.end());  // **Sorting to ensure correct two-pointer approach**
    sort(a2.begin(), a2.end());  // **Sorting second array as well**
	int result=pairs(a1,a2,sum);
	cout<<"RESULT :"<<result;
	return 0;
}
