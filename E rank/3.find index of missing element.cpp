#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7};
	int b[]={1,2,3,4,5,7};
	int n=7;
	int index=0;
	int beg=1,end=n;
	while(beg<=end)
	{
		int mid=(beg+end)/2;
		if(a[mid]==b[mid])
		{
			beg=mid+1;
		}
		else
		{
			index=mid+1;
			end=mid-1;
		}
	}
	printf("%d",index);
	return 0;
}
