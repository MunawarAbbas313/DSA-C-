#include<iostream>
using namespace std;
int main()
{
	/* Patter 1 
	   1 2 3 4
	   1 2 3 4 
	   1 2 3 4
	   1 2 3 4
	   using while & for loop */
	int i=1;
	while(i<=4)
	{
		int j=1;
		while(j<=4)
		{
			cout<<j<<" ";
			j++;
		}
	    i++;
	    cout<<endl;
			
	}
	
	/* For loop
	  for(int i=1; i<=4; i++)
	  {
	     for(int j=1; j<=4; j++)
	     {
	        cout<<j<<" ";
	    
	    }
	    cout<<endl;
	}
	*/
	return 0;
}