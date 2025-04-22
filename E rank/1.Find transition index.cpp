#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int beg=0,end=n-1;
	int a[n],i;
	int index=-1;
		for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	if(n==1 && a[0]==0)
	{
		printf("\nNO Transition its only one zero");
		return 0;
	}
	while(beg<=end)
	{
		int mid=(beg+end)/2;
		if(a[mid]==1 && (mid == 0 ||a[mid-1]==0))
		{
		     index =mid;
		     break;
		}
		else if(a[mid]==1)
		{
		
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
	}
	if(index==-1)
	{
		printf("\nNO Transition");
	}
	else
	    printf("the index is:%d",index);
	return 0;
}
