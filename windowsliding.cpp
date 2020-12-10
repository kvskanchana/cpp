/*
input: k
array of integers

o/p:
within the size of k find the largest element of the sub-array of size k in the array

ip:k=3
n=8
1 5 3 9 7 1 3 0

o/p:
1 5 3-ans:5
5 3 9-ans:9
3 9 7-ans:9
9 7 1-ans:9
7 1 3-ans:7
1 3 0-ans:3

*/
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	int n;
	cout<<"enter the window value";
	cin>>k;
	cout<<endl<<"enter the size of an array";
	cin>>n;
	int a[n];
	cout<<endl<<"enter the array values"<<endl;
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<=(n-k);i++)
	{
    	temp=a[i];
    	for(j=1;j<k;j++)
    	{
    		if(temp<a[i+j])
    		{
    			temp=a[i+j];
			}
		}
    	cout<<temp;
	}
	return 0;
}
