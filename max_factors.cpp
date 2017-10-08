#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void max_factors(int brr[], int x)
{
	int p,q,r,count;
	
	for(p=0;p<x;p++)
	{
		count =0;
		while(brr[p]%2==1)
		{
			count++;
		}
	 for(q=3;q<(brr[p])/2;q=q+2)
	 {
	 	if(brr[p]%q==0)
	 	{
	 		brr[p] = brr[p]/q;
	 		count++;
	 	}
	 	
	 }	
	 brr[p] = count;
	}
	sort(brr, brr+x);
	int y = brr[0];
	cout<<y;
}
int main() {
    int n;int k=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int x = (n*(n-1))/2;
    //cout<<x;
    int brr[x];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
             {
                brr[k] = arr[i]*arr[j];
                 k++;
            }
    }
  max_factors(brr,x);
    return 0;
}
