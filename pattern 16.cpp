#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
	
	int rows;
	cout<<"\n Enter the number of Rows : ";
	cin>>rows;
	//using while loop
	int i=1;
	while(i<=rows)
	{
		int j=1;
		char ch = 'A'+ rows -i;
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
	for(int i=0; i<=rows; i++)
	{
			char ch = 'A'+rows-i;
		for(int j=1; j<=i; j++)
		{
		    cout<<ch<<" ";
		    ch++;
		}
		cout<<endl;
	}*/

    return 0;

}
