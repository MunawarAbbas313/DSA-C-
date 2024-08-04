#include<iostream>
using namespace std;
int main()
{
	int rows;
	cout << " Enter the Number of Rows : ";
	cin >> rows ;
	int count =1;
	// using while loop 
	int i =1;
	while(i<=rows)
	{
		int j = 1;
		while(j<=i)
		{
			cout<<count <<" ";
			count++;
			j++;
		}
		cout<<"\n";
		i++;
	}
	//using for loop 
//	for(int i = 1; i<= rows ; i++)
//	{
//		for(int j = 1; j <= i; j++)
//		{
//			cout<<count<<" ";
//			count++;
//			
//		}
//		
//		cout<<endl;
//		
//	}
	return 0;
}