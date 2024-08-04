#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
    /*
	    A
	    B  C
	    D  E F
	    G H I J
	*/
	// using for loop and while;
	int rows;
	cout<<"\n Enter number of Rows : ";
	cin>>rows;
	char ch = 'A';
	// using while loop 
	int i=1;
	while(i<=rows)
	{
		int j = 1;
		while(j<=i)
		{
			cout<<ch<<" ";
			ch++;
			j++;
		}
		cout<<endl;
		i++;
	}
	
	/*
	    for(int i=1; i<=rows; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
	*/
    return 0;

}
