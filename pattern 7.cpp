#include<iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"\n Enter the Number of the rows : ";
	cin>> rows;
	
	// using while loop 1st method 
	int i = 1;
	while(i<=rows)
	{
		int value = i;
		int j = 1;
		while(j<=i)
		{
			cout<<value<<" ";
			value++;
			j++;
		}
		cout<<endl;
		i++;
	}
	
	//usig for loop 1st method :
//	for(int i=1; i<= rows; i++)
//	{
//		for(int j=i; j<2*i; j++)
//		{
//			cout<<j<<" ";
//		}
//		cout<<endl;
//	}
// using for loop 2nd Method 


//for(int i=1; i<= rows; i++)
//{     
//int value = i;
//	for(int j=1; j<=i; j++)
//	{
//		
//		cout<<value<<" ";
//		value++;
//	}
//	cout<<endl;
//}
	return 0;
}