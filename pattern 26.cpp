#include<iostream>
#include<strings.h>
using namespace std;
int main()
{

	for(int i=1; i<=5; i++)
	{
		int num=1;
		
		for(int j=5; j>=i; j--)
		{
			cout<<num;
			num++;
		
		}
		for(int spaces = i-1; spaces>0; spaces--)
		{
			cout<<"*";
		}
		for(int lspaces =i-1; lspaces>0; lspaces--)
		{
			cout<<"*";
		}
		for(int k=5-i+1; k>0; k--)
		{
			
			cout<<k;
		}
		cout<<endl;
			
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	// using while loop
	
	int i=1;
	while(i<=5)
	{
		int num=1;
		// first triangle
		int j=5;
		while(j>=i)
		{
			cout<<num;
			num++;
			j--;
		}
		// spaces 
		int spaces = i-1;
		while(spaces)
		{
			cout<<"*";
			spaces--;
		}
		
		// second spaces 
		
		int lspaces= i-1;
		while(lspaces)
		{
			cout<<"*";
			lspaces--;
		}
		// 2nd triangle
		
		int k = 5-i+1;
		while(k)
		{
			cout<<k;
			k--;
		}
		cout<<endl;
		i++;
		
	}
		 return 0;
	}
