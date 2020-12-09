#include<iostream>
#include<vector>
#include<string.h>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	string chr;
	cin>>chr;
	int n;
	n=chr.size();
	int i,j,k,l;
	k=n;
		for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		cout<<" ";
		cout<<chr[i];
		k=k-1;
		if(i==k)
		break;
		for(l=i+1;l<k;l++)
		cout<<" ";
		cout<<chr[k];
		cout<<endl;
	}
	cout<<endl;

	for(k=k-1;k>=0;k--)
	{
		i=i+1;
	for(j=0;j<k;j++)
	cout<<" ";
	cout<<chr[k];
	for(l=k+1;l<i;l++)
	cout<<" ";
	cout<<chr[i];
	cout<<endl;
    }
   
	return 0;
}
