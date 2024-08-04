#include<iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"\n Enter the Number of Rows : ";
	cin>>rows;
	// using while loop
	int i=1;
	while(i<= rows)
	{
		int j = 1;
		while(j<=rows)
		{
			char c = 65+i-1;
			cout<<c<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
//	for(int i=1; i<= rows; i++)
//	{
//		for(int j=1; j<= rows; j++)
//		{
//			char ch = 'A'+i-1;
//			cout<<ch << " ";
//		}
//		cout<<endl;
//	}
	return 0;
}