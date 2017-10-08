#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int mincoins(int coins[],int m,int v)
{
	int u[v+1];
	u[0] =0;
	for(int i=1;i<=v;i++)
	{
		u[i] = INT_MAX;
	}
	
	for(int i=1;i<=v;i++)
	{
		for(int j=0;j<m;j++)
		{
		    if(coins[j]<=i)
		    {
		    	int res = u[i-coins[j]];
		    	if(res!=INT_MAX && 1+res<u[i])
		    		u[i] =1+res;
		    }
		}
	}
	return u[v];
}
int main()
{
	int coins[]={9,6,4,1,2};
	int m = sizeof(coins)/sizeof(coins[0]);
	
	cout<<"The min no.of coins required ";
	cout<<mincoins(coins,m,17);
	return 0;
}

