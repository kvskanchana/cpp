/*
ip:5
op:

5 6 15 16 25
4 7 14 17 24
3 8 13 18 23
2 9 12 19 22
1 10 11 20 21

*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	int value=n;
	int i,j,k;
	cout<<"enetr the size";
	cin>>n;
	int ec=(n*2)-1;     //even column increment
	int oc;            //odd column increment
	for(i=0;i<n;i++)      
	{
		oc=(i*2)+1;
		value=n-i;
		for(j=0;j<n;j++)
		{
			if(j==0)
			{
				cout<<value<<" ";
			}
			else if(j%2==0)
			{
				value=value+ec;
				cout<<value<<" ";
			}
			else if(j%2!=0)
			{
				value=value+oc;
				cout<<value<<" ";	
			}
		}
		cout<<endl;
		ec=ec-2;
	}
	return 0;
}
