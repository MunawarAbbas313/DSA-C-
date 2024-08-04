#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
	int rows;
	cout<<"\n Enter number of rows : ";
	cin>>rows;
	// more simpley way :
	for(int i=1; i<=rows; i++)
	{
		char ch = 'A'+i-1;
		for(int j=1; j<=rows; j++)
		{
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
	/*
	for(int i=1; i<rows; i++)
	{
		for(int j=1; j<rows; j++)
		{
			char ch = 'A'+i+j-2;
			cout<<ch<<" ";
		}
		cout<<endl;
	}*/

    return 0;

}
