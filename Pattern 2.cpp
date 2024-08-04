#include<iostream>
using namespace std;
int main()
{
	
	/* Patten 2 
	   4 3 2 1
	   4 3 2 1
	   4 3 2 1
	   4 3 2 1
	   using while and for Loop 
	   */
	   int i=1;
	   while(i<=4)
	   {
	   	 int j=4;
	   	 while(j>=1)
	   	 {
	   	 	cout<<j<<" ";
	   	 	j--;
			}
	   	cout<<endl;
	   	i++;
	   }
	   //for loop 
	   /*
	     for(int i=0; i<=3; i++)
	    {
	    	for(int j=4; j>=1; j--)
	    	{
	    		cout<<j<<" ";
			}
			cout<<endl;
		}
		*/
	   return 0;
}