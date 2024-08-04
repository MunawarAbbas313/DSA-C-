#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
	/* Pattern 15
	   A
	   B C
	   C D E
	   D E F G
	*/
	//using for loop
	int rows;
	cout<<"\n Enter the Number of rows :";
	cin>>rows;
	for(int i=1; i<=rows; i++)
	{
		for(int j = 1; j<= i; j++)
		{
			char ch = 'A'+j+i-2;
			cout<<ch<<" ";
		}
		cout<<endl;
	}
			
    return 0;

}
