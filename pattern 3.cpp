#include<iostream>
using namespace std;
int main()
{    
    s:
	int rows;
	cout<<"\n Enter the Number of Rows ";
	cin>>rows;
	int count = 1;
	/* Pattern 3 
	   1 2 3 
	   4 5 6
	   7 8 9
	   */
	/*
	   using for Loop 
	
	for(int i=1; i<=rows; i++)
	{
		for(int j=1; j<=rows; j++)
		{
			cout<<count<<" ";
			count++;
			
			
		}
		cout<<endl;
	}
	*/
	int i=1;
	while(i<=rows)
	{
		int j =1;
		while(j<=rows)
		{
			cout<<count<<" ";
			count++;
			j++;
		}
		cout<<endl;
		i++;
	}

	return 0;
}