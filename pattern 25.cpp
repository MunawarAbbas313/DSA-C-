#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
    for(int i=1; i<=4; i++)
    {
    	for(int spaces= 4-i; spaces>0; spaces--)
    	{
    		cout<<" ";
		
		}
		for(int j=1; j<=i; j++)
		{
			cout<<j;
		}
	
		for(int k=i-1; k>0; k--)
		{
			
			cout<<k;
		}
		cout<<endl;
		
	}
	cout<<endl;
	cout<<endl;
	
	//using while loop
	int i=1;
	while(i<=4)
	{
		int spaces =4-i;
		while(spaces)
		{
			cout<<" ";
			spaces--;
		}
		int j=1;
		while(j<=i)
		{
			cout<<j;
			j++;
		}
		int k=i-1;
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
