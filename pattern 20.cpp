#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
	/*Pattern 20
	 * * * *
	   * * *
	     * *
	       *
	 
	*/

//	for(int i=1; i<=4; i++)
//	{
//		for(int spaces = i-1; spaces >0; spaces++)
//		{
//			cout<<" ";
//		}
//		for(int j= 4-i+1; j>=1; j--)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	}
 int n = 4;
  int i =1;
  while(i<=n){ 
    int space=i-1;
    while (space>0){
      cout<<" ";
      space--;
    }
    int star=4-i+1;
    while (star>0){
      cout<<"*";
      star--;
    }
    cout<<endl;
    i++;
  }
cout<<"\n"<<endl<<endl;
for(int i=1; i<=4; i++)
{
		for(int spaces = i-1; spaces > 0; spaces--)
	{
		cout<<" ";
	}
	for(int star= 4-i+1; star>0; star--)
	{
		cout<<star;
	}

	cout<<endl;
}

  return 0;

}
