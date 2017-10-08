#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lis(int arr[],int n)
{
	int *lis;
	lis = (int*)malloc(sizeof(int)*n);
	
	int i,j,max=0;
	for(i=0;i<n;i++)
	{
		lis[i] =1;
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[j]<arr[i] &&lis[i]<lis[j]+1)
			  lis[i] =lis[j]+1;
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(max<lis[i])
		max=lis[i];
	}
	
	free(lis);
	return max;
	
}
int main()
{
	int arr[] ={10, 22, 9, 33, 21, 50, 41, 60, 80};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout<<lis(arr,n)<<endl;
	
	return 0;
}
