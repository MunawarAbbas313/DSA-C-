#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
    // using while loop
    int num =1;
    int i=1;
    while(i<=4)
    {
    	int spaces = 4-i;
    	while(spaces)
    	{
    		cout<<" ";
    		spaces--;
		}
		int j=1;
		while(j<=i)
		{
			cout<<num;
			num++;
			j++;
		}
		cout<<endl;
		i++;
	}
    
    /*
	
	   using for loop
	   int num =1;
    for(int i=1; i<=4; i++)
    {
    	for(int spaces= -i; spaces>0; spaces--)
    	{
    		cout<<" ";
		}
		for(int j=1; j<=i; j++)
		{
			cout<<num;
			num++;
		}
		cout<<endl;
	}
	*/
    return 0;

}
