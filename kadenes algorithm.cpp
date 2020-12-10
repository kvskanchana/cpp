/*
max_ending is the sum of the sub-array starting from the first index to the current index 
max_sofar should be INT_MIN since it should hold both positive and negative data
if max so far is declared to '0' then the comparison will not done for initial negative values of
max_ending. if we initialise it with INT_MIN then even if the 1st max_ending value is smaller than 
0 we can store the initial value in ma_sofar.

this is kadanes algorithm and is used to find the largest sum of sub array 


*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of the array";
	cin>>n;
	int a[n];
	int max_sofar=INT_MIN;
	int max_ending=0;
	int sas;//subarray starting;
	int sae;//sub array ending
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
			max_ending=max_ending+a[i];
			if(max_ending<a[i])
			{
				max_ending=a[i];
				sas=i;
			}
			
			if(max_sofar<max_ending)
			{
				max_sofar=max_ending;
				sae=i;
			}
	
	}
	cout<<max_sofar<<endl;
	cout<<"starting address of the sub array is"<<sas<<endl;
	cout<<"ending address of the sub array is"<<sae<<endl;
	return 0;
}
