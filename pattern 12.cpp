#include<iostream>
#include<strings.h>
using namespace std;
int main()
{ 
/*
  A B C
  B C D
  C D E
*/
// using while loop
int i=1;
while(i<=3)
{
	int j = 1;
	while(j<=3)
	{
		char ch = 'A'+i+j-2;
		cout<<ch<<" ";
		j++;
	}
	cout<<endl;
	i++;
}
//using for Loop
  /*
  int rows;
  cout<<"\n Enter the number of rows : ";
  cin>>rows;
  for(int i=1; i<=rows; i++)
  {
  	for(int j=1; j<=rows; j++)
  	{
  		char ch = 'A'+j+i-2;
  		cout<<ch<<" ";
	  }
  	cout<<endl;
  }
*/
    return 0;

}
