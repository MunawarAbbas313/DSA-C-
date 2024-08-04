#include<iostream>
using namespace std;
int main()
{
	/* Pattern 4 
	    *
	    **
	    ***
	    ****
	    */
	int rows ;
	cout<<"\n Enter number of Rows : ";
	cin>>rows;
    int i=1;
    while(i<=rows)
    {
    	int j=1;
    	while(j<=i)
    	{
    		cout<<"*"<<" ";
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
			cout<<"*"<<" ";
			
		}
		cout<<endl;
	}
    */
	return 0;
}