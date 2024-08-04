#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
    int rows;
    cout<<"\n Enter the number of Rows : ";
    cin>>rows;
    // using while loop
    int i =1;
    while(i<=rows)
    {
    	int j = 1;
    	while(j<=rows)
    	{
    		char ch = 'A'+j-1;
    		cout<<ch<<" ";
    		j++;
		}
    	cout<<endl;
    	i++;
	}
    /*for(int i= 1; i<=rows; i++)
    {
    	for(int j=1; j<=rows; j++)
    	{
    		char ch = 'A'+j-1;
    		cout<<ch<<" ";
		}
    	cout<<endl;
	}*/
    return 0;

}
