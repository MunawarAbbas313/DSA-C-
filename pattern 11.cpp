#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
	char count = 'A';
	// using while loop 
	
	int i = 1;
	while(i<=3)
	{
		int j =1;
	   while(j<=3)
	   {
	   	cout<<count << " ";
	   	count++;
	   	j++;
	   }
	   cout<<endl;
	   i++;	
	}
	
	/* for(int i=1; i<=3; i++)
	{
		for(int j=1; j<=3; j++)
		{
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}*/
	

    return 0;

}
