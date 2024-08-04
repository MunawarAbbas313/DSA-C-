#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
   /*
      A
      B B
      C C C
      D D D D
   */
   // using for loop  & while
   int rows;
   cout<<"\n Enter Number of Rows : ";
   cin>>rows;
   int i =1;
   while(i<=rows)
   {
   	int j = 1;
   	while(j<=i)
   	{
   		char ch = 'A'+i-1;
   		cout<<ch<<" ";
   		j++;
	   }
   	cout<<endl;
   	i++;
   }
  /*
   for(int i =1; i<=rows; i++)
   {
   	  for(int j=1; j<=i; j++)
   	  {
   	  	char c = 'A'+ i - 1;
   	  	cout<<c<<" ";
		 }
   	 cout<<endl;
   }*/
    return 0;

}
