#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string str;int j;
	getline(cin,str);

	int l=str.length();
	int count=0;

sort(str.begin(),str.end());
	for(int i=0;i<l;i++)
	{
		
		{
			j=i+1;
		   if(str[i]!=str[j])
		   {
		 count++;
		   
		   }
		}
	}
	
	cout<<count;
	
	
	return 0;
}
