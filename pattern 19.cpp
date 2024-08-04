#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
	int rows;
	cout<<"\n Enter the Number of rows : ";
	cin>>rows;
	int i=1;
	while(i<=rows)
	{
	
		int j =rows;
		while(j>=i)
		{
			cout<<"*";
			j--;
		}
		int spaces = i-1;
		while(spaces <= 1)
		{
			cout<<" ";
			spaces++;
		}
		
		cout<<endl;
		i++;
	}
	
	// using for loop
//	for(int i=1; i<=rows; i++)
//	{
//		for(int j=rows; j>=i; j--)
//		{
//			cout<<"*"; 
//			        
//		}
//		for(int spaces = i-1; spaces<=1; spaces++)
//		{
//			cout<<" ";
//		}
//		
//		cout<<endl;
//	}

    return 0;

}
