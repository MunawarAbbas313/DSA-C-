#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
	//using while loop
	int i=1;
	while(i<=4)
	{
		int spaces = 4-i;
		while(spaces)
		{
			cout<<" ";
			spaces--;
		}
		int num = 1;
		while(num<=i)
		{
			cout<<i;
			num++;
		}
		cout<<endl;
		i++;
	}

   //using for loop
   /*
   for(int i=1; i<=4; i++)
   {
   	for(int spaces = 4-i; spaces >0; spaces--)
   	{
   		cout<<" ";
	   }
	   for(int num =1; num<=i; num++)
	   {
	   	cout<<i;
	   }
	   cout<<endl;
   }
   */
    return 0;

}
