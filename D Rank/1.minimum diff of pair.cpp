#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int mindiff(vector<int> &nums)
{
	int n=nums.size();
	if(n<2)
	{
		cout<<"The sorting of the list :"<<nums[0];
		return 0;
	}
	sort(nums.begin(),nums.end());
    cout<<"The sorting of the list :";
    for(int i=0;i<n;i++)
    {
      cout<<nums[i]<<" ";	
	}
    
	int m=nums[n-1];
	for(int i=0;i<n-1;i++)
	{
		if(nums[i+1]-nums[i]<m)
		{
			m=nums[i+1]-nums[i];
		}
	}
	return m;
	
}
int main()
{
	string input;
	vector<int>nums;
	int i=0;
	cout<<"Enter the list of numbers:";  //minimum diff between pair
	getline(cin,input);
	stringstream ss(input);
	int num;
	while(ss >> num)
	{
		nums.push_back(num);
	}
	int result=mindiff(nums);
	cout<<endl;
	cout<<"The minimum differ of pairs is:"<<result;
	
	return 0;
}
