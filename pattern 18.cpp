#include<iostream>
#include<strings.h>
using namespace std;
int main()
{ 
      /*
	       *
	     * *
	   * * *
	 * * * *
	  */
     int rows;
     cout<<"\n Enter numbr of rows : ";
     cin>>rows;
    // using while loop 
     int i=1;
     while(i<=rows)
     {
     	int spaces = rows - i;
     	while(spaces >= 1)
     	{
     		cout<<" ";
     		spaces--;
		 }
		 
		 int j=1;
		 while(j<=i)
		 {
		 	cout<<"*";
		 	j++;
		 }
     	cout<<endl;
     	i++;
	 }
    
    // using for loop
    /*for(int i=1; i<=rows; i++)
    {
    	for(int j=rows-i; j>0; j--)
    	{
    		cout<<" ";
		}
		for(int k=1; k<=i; k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}*/
    return 0;

}
