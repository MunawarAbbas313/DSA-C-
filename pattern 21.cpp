#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
	// using while loop
	int i=1;
	while(i<=4)
	{
		int spaces =i-1;
		while(spaces)
		{
			cout<<" ";
			spaces--;
		}
		int num=4-i+1;
		while(num)
		{
			cout<<i;
			num--;
		}
		cout<<endl;
		i++;
	}
  //using for loop
  
  	/*
  	for(int i=1; i<=4; i++)
  {
	  for(int spaces=i-1; spaces>0; spaces--)
  	{
  		cout<<" ";
	  }
	  for(int stars=4-i+1; stars>0; stars--)
	  {
	  	cout<<i;
	  }
	  cout<<endl;
	  }*/
  
    return 0;

}
