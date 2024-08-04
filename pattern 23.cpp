#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
	// using while loop
	int i=1;
	while(i<=4)
	{
		int spaces = i-1;
		while(spaces)
		{
			cout<<" ";
			spaces--;
		}
		int j=i;
		while(j<=4)
		{
			cout<<j;
			j++;
		}
		cout<<endl;
		i++;
	}
	// using for loop
//	for(int i=1; i<=4; i++)
//	{
//		int num = i*2-1;
//		for(int spaces=i-1; spaces>0; spaces--)
//		{
//			cout<<" ";
//		}
//		for(int j=i; j<=4; j++)
//		{
//			cout<<j;
//		}
//		cout<<endl;
//	}

    return 0;

}
