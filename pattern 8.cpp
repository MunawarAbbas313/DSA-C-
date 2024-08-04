#include<iostream>
using namespace std;
int main()
{
	/* 1
	   2 1
	   3 2 1
	   4 3 2 1
	   */
	   
	   // using while loop
	   int i =1;
	   while(i <= 4)
	   {
	   	     int j=1; 
	   	     while(j<=i)
	   	     {
	   	     	cout<<i-j+1<<" ";
	   	     	j++;
				}
	   	     cout<<endl;
	   	     i++;
	   }
//	   for(int i=1; i<=4; i++)
//	   {
//	   	for(int j=1; j<=i;j++)
//	   	{
//	   		cout<<(i-j+1)<<" ";
//	   		
//		   }
//		   cout<<endl;
//	   }
	return 0;
}