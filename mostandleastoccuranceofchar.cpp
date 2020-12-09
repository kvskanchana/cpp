#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int a[256]={0};
	int i;
	int n;
	n=str.size();
	for(i=0;i<n;i++)
	a[str[i]]++;
	int min,max;
	char minc,maxc;
	minc=str[0];
	min=a[str[0]];
	max=a[str[0]];
	maxc=str[0];
	for(i=1;i<n;i++)
	{
		if(a[str[i]]<min)
		{
			minc=str[i];
			min=a[str[i]];
		}
		if(a[str[i]]>max)
		{
			maxc=str[i];
			max=a[str[i]];
		}
	}
	cout<<max<<endl;
	cout<<maxc<<endl;
	cout<<min<<endl;
	cout<<minc;
	return 0;
}
