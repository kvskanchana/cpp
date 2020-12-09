/*
ip:3
op:
  --1--
  -232-
--45654--

*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of terms";
	cin>>n;
	int i,k,j;
	int value;
	int value2;
	value =1;
	for(i=0;i<n;i++)               //rows
	{
		value2=value;
		for(j=i;j<(n-1);j++)       //column
		{
			cout<<" ";
		}
		
		for(k=0;k<=i;k++)          //first half column
		{
			cout<<value<<"";
			value++;
		//	cout<<"*";
		}
		
		for(k=0;k<i;k++)          //second half column
		{
			cout<<value2<<"";
			value2++;
			//cout<<"*";
		}
		
		for(j=i;j<(n-1);j++)      //second half space
		{
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}  
